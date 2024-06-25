/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:40:14 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/17 20:03:21 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	s1[] = "abc";
	char	s2[] = "abf";
	int	result;

	result = ft_strcmp(s1, s2);
		if (result > 0)
			printf("string 1 is greater than string 2 (%d)\n", result);
		else if (result < 0)
			printf("string 1 is less than string 2 (%d)\n", result);
		else
			printf("string 1 is equal to string 2 (%d)\n", result);
		return (0);
}*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
