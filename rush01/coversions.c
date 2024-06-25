/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coversions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 10:32:41 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/16 10:32:47 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include "struct.h"

int my_atoi(char *str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-') {
        sign = -1;
        i++;
    }

    while (str[i] != '\0') {
        result = result * 10 + str[i] - '0';
        i++;
    }

    return sign * result;
}

void split_constraints(char *constraints, int *visibility) {
    int i = 0;
    int j = 0;
    char buffer[3];

    while (constraints[i] != '\0') {
        int k = 0;
        while (constraints[i] != ' ' && constraints[i] != '\0') {
            buffer[k++] = constraints[i++];
        }
        buffer[k] = '\0';
        visibility[j++] = my_atoi(buffer);

        if (constraints[i] != '\0') {
            i++;
        }
    }
}


void my_itoa(int num, char* str) {
    int i = 0;
    int is_negative = 0;

    if (num == 0) {
        str[i++] = '0';
        str[i] = '\0';
        return;
    }

    if (num < 0) {
        is_negative = 1;
        num = -num;
    }

    while (num != 0) {
        int rem = num % 10;
        str[i++] = rem + '0';
        num = num / 10;
    }

    if (is_negative) {
        str[i++] = '-';
    }

    str[i] = '\0';

    int start = 0;
    int end = i - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
