/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:57:20 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/24 12:52:32 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int	result = ft_recursive_power(5, 0);
	printf("%d", result);
	return (0);
}*/

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	else if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	else if (power == 0)
		return (1);
	else
		return (result);
}
