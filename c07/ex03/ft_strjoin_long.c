/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:42:16 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/25 14:34:06 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*tab[4];
	tab[0] = "Jedna";
	tab[1] = "dve";
	tab[2] = "tri";
	tab[3] = "ctryri";
	printf("%s", ft_strjoin(4, tab, "mezerapico"));
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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
	int	i;
	int	sep_len;
	int	sep_count;
	int	total_lenght;
	char	*result;

	if (size <= 0)
	{
		result = (char *)malloc(sizeof(char));
		if (result)
			result[0] = '\0';
		return (result);
	}
	sep_len = ft_strlen(sep);
	sep_count = size - 1;
	total_lenght = 0;
	i = 0;
	while (i < size)
	{
		total_lenght = total_lenght + ft_strlen(strs[i]);
		i++;
	}
	total_lenght = total_lenght + sep_count * sep_len + 1;
	result = (char *)malloc(sizeof(char) * total_lenght);
	if (!result)
		return (0);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size -1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
