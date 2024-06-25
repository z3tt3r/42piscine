/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:07:01 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/24 14:31:58 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_sqrt(int nb);

int main(void)
{
	int	result;

	result = ft_sqrt(65);
	printf("%d", result);
	return 0;
}*/

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i * i <= nb)
	{
		if (nb == i * i)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
