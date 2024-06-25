/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:55:29 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/16 13:40:16 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char *str = "OTHERLETTERS";
	int	result;
	
	result = ft_str_is_uppercase(str);
	if (result == 1)
		printf("OK\n");
	else 
		printf("Error\n");
	return (0);
}*/

int	check_upper(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_upper(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
