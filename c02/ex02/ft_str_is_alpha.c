/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:05:04 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/16 13:33:15 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	int	result;
	char *str = "Wednesday45";
	result = ft_str_is_alpha(str);
	if (result == 1)
		printf("The string contains alphabetic characters only.\n");
	else 
		printf("The string contains non-alphabetic characters.\n");
	return (0);
}*/

int	check_alpha(char c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_alpha(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
