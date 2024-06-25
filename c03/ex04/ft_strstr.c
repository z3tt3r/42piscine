/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:01:11 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/17 16:26:03 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
    char str[] = "Needle in a haystack";
    char *to_find = "haystack";
    char *result;

    result = ft_strstr(str, to_find);
    if (result != NULL)
        printf("Beginning of subtring found at position: %ld\n", result - str);
    else
        printf("Substring not found\n");
    
    return 0;
}*/

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	n;
	unsigned int	i;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		n = 0;
		while (str[i + n] != '\0' && str[i + n] == to_find[n])
		{
			n++;
			if (to_find[n] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
