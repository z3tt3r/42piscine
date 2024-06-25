/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:10:51 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/16 13:36:07 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char *str = "123456a";
	int	result;

	result = ft_str_is_numeric(str);
	if (result == 1)
		printf("OK\n");
	else
		printf("Error\n");
	return (0);
}*/

int	check_numeric(char c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_numeric(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
