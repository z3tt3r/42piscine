/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 09:55:12 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/07 09:00:29 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void ft_putchar(char c);

int main() {
    ft_putchar('c');

    return 0;
}*/

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
