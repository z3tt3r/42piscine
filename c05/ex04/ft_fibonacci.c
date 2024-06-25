/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 12:55:18 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/24 13:57:20 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	i;
	
	i = 0;
	while (i < 31)
	{
		printf("%d\n", ft_fibonacci(i));
		i++;
	}
	return (0);
}*/

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index < 0)
		return (-1);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index -1) + ft_fibonacci(index - 2));
}
