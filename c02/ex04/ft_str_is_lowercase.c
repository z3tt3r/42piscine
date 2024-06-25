/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:47:51 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/16 13:24:59 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char *str = "poiuytegd";
	int	result;

	result = ft_str_is_lowercase(str);
	if (result == 1)
		printf("OK\n");
	else
		printf("Error\n");	
	return (0);
}*/

int	check_lower(char c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_lower(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
