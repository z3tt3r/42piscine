/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:37:17 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/16 18:00:51 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	int	result;
	char *str = "";
	
	result = ft_str_is_printable(str);
	if (result == 1)
		printf("OK \n");
	else
		printf("Error \n");
	
	return (0);
}*/

int	check_printable(char c)
{
	if ((c >= ' ') && (c <= '~'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_printable(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
