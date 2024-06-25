/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 17:13:27 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/18 14:02:06 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char s1[] = "5";
	char s2[] = "4";
	int	result;

	result = ft_strncmp(s1, s2, 8);
	if (result > 0)
		printf("String one is larger (%d)\n", result);
	else if (result < 0)
                printf("String one is less (%d)\n", result);
	else
		printf("Strings are the same%d)\n", result);
	return(0);
}*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
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
