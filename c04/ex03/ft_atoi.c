/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:18:43 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/18 18:48:20 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	*s = "     -----+--+1234ab567";
	
	printf("%d", ft_atoi(s));
	return (0);
}*/

int	ft_atoi(char *str)
{
	int	minus_count;	
	int	i;
	int	num;

	i = 0;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	minus_count = 0;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
		{
			minus_count++;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	if (!(minus_count % 2))
		return (num);
	return (num * -1);
}
