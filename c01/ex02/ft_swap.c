/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:38:17 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/11 15:53:55 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>

void	ft_swap(int*a, int*b);

int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 10;
	ft_swap(&a, &b);
	printf("%d", a);
	printf("%d", b);
	return (0);
}*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
