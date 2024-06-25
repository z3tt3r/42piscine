/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:04:16 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/17 16:14:42 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char dest[50] = "Destination";
	char *src = "Source";
	
	ft_strcat(dest, src);
	printf("%s",dest);

	return (0);
}*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	dest[i] = src[n];
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
