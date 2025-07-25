/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:33:00 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/15 14:44:05 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "struct.h"

#define SIZE 4

void my_itoa(int num, char* str);
void print_board(State *state);
int is_valid(int board[SIZE][SIZE], int row, int col, int num);
int count_visible_boxes(int *line, int size);
int check_visibility(int board[SIZE][SIZE], int visibility[SIZE][2], int idx, int is_row);
int solve(State *state, int row, int col);
int *my_atoi(char *str);
void split_constraints(char *constraints, int *visibility);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        write(1, "Usage: ./rush-01 \"constraints\"\n", 31);
        return 1;
    }

    int visibility[16];
    split_constraints(argv[1], visibility);

    State *state = (State *)malloc(sizeof(State));
    int i = 0;
    while (i < SIZE) {
        int j = 0;
        while (j < SIZE) {
            state->board[i][j] = 0;
            j++;
        }
        i++;
    }

    i = 0;
    while (i < SIZE) {
        state->col_visibility[i][0] = visibility[i];
        state->col_visibility[i][1] = visibility[i + SIZE];
        state->row_visibility[i][0] = visibility[i + 2 * SIZE];
        state->row_visibility[i][1] = visibility[i + 3 * SIZE];
        i++;
    }

    if (solve(state, 0, 0)) {
        print_board(state);
    } else {
        write(1, "No solution found\n", 18);
    }

    free(state);
    return 0;
}

void print_board(State *state) {
    char buffer[256];
    int offset = 0;
    int i = 0;
    while (i < SIZE) {
        int j = 0;
        while (j < SIZE) {
            char num_str[4];
            my_itoa(state->board[i][j], num_str);
            int k = 0;
            while (num_str[k] != '\0') {
                buffer[offset++] = num_str[k++];
            }
            buffer[offset++] = ' ';
            j++;
        }
        buffer[offset++] = '\n';
        i++;
    }
    write(1, buffer, offset);
}

int is_valid(int board[SIZE][SIZE], int row, int col, int num) {
    int i = 0;
    while (i < SIZE) {
        if (board[row][i] == num || board[i][col] == num) {
            return 0;
        }
        i++;
    }
    return 1;
}

int count_visible_boxes(int *line, int size) {
    int max_height = 0;
    int visible_count = 0;
    int i = 0;
    while (i < size) {
        if (line[i] > max_height) {
            max_height = line[i];
            visible_count++;
        }
        i++;
    }
    return visible_count;
}

int check_visibility(int board[SIZE][SIZE], int visibility[SIZE][2], int idx, int is_row) {
    int line[SIZE];
    int i = 0;
    if (is_row) {
        while (i < SIZE) {
            line[i] = board[idx][i];
            i++;
        }
    } else {
        while (i < SIZE) {
            line[i] = board[i][idx];
            i++;
        }
    }

    int left_count = count_visible_boxes(line, SIZE);

    i = 0;
    while (i < SIZE / 2) {
        int temp = line[i];
        line[i] = line[SIZE - 1 - i];
        line[SIZE - 1 - i] = temp;
        i++;
    }

    int right_count = count_visible_boxes(line, SIZE);

    return (left_count == visibility[idx][0] && right_count == visibility[idx][1]);
}

int solve(State *state, int row, int col) {
    if (row == SIZE) {
        return 1;
    }
    if (col == SIZE) {
        return check_visibility(state->board, state->row_visibility, row, 1) && solve(state, row + 1, 0);
    }
    if (state->board[row][col] != 0) {
        return solve(state, row, col + 1);
    }

    int num = 1;
    while (num <= SIZE) {
        if (is_valid(state->board, row, col, num)) {
            state->board[row][col] = num;
            if (solve(state, row, col + 1)) {
                return 1;
            }
            state->board[row][col] = 0;
        }
        num++;
    }
    return 0;
}
