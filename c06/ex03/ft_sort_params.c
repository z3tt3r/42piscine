/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:00:40 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/20 21:20:17 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_string_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

void	ft_sort(char **argv, int args)
{
	int	j;
	int	k;
	int	len;

	len = args;
	while (len - 1)
	{
		j = 0;
		k = 1;
		while (k < len)
		{
			if (ft_strcmp(argv[j], argv[k]) > 0)
				ft_string_swap(&argv[j], &argv[k]);
			j++;
			k++;
		}
		len--;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	ft_sort(argv + 1, argc -1);
	i = 1;
	if (argc < 2)
		return (1);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
