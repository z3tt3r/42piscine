/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:42:16 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/25 15:31:14 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);
/*
int	main(void)
{
	char	*tab[4];
	tab[0] = "Jedna";
	tab[1] = "dve";
	tab[2] = "tri";
	tab[3] = "ctryri";
	printf("%s", ft_strjoin(4, tab, "mezerapico"));
	return (0);
}*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*make_buffer(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;
	int		sep_len;
	int		sep_count;
	char	*result;

	i = 0;
	total_len = 0;
	sep_len = ft_strlen(sep);
	sep_count = size - 1;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len = total_len + sep_count * sep_len + 1;
	result = (char *)malloc(sizeof(char) * total_len);
	if (result)
	{
		result[0] = '\0';
	}
	return (result);
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*result;

	if (size <= 0)
	{
		result = (char *)malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	result = make_buffer(size, strs, sep);
	if (!result)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
