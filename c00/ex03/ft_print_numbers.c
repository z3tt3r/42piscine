/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:18:21 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/07 09:01:04 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
	return (0);
}*/

void	ft_print_numbers(void)
{
	char	num;

	num = 48;
	while (num <= 57)
	{
		write(1, &num, 1);
		num++;
	}
}
