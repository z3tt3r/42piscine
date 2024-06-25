/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 12:14:47 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/16 13:52:10 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

int	main(void)
{
	char *src = "Source string";
	char dest[50];

	ft_strlcpy(dest, src, 13);
	printf ("%s", dest);
	return (0);
}*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count] != '\0')
		count++;
	if (size < 1)
		return (count);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}
