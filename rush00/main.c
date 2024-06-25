/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksorokol <ksorokol@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-09 14:43:48 by ksorokol          #+#    #+#             */
/*   Updated: 2024/06/14 10:27:26 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	rush(int x, int y);
int	tf_c_len(char *c);
int	ft_exp(int i);
int	ft_c2int(char *c);

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc == 2 || argc > 3)
	{
		write (1, "Argument count must be 0 or 2!\n", 31);
		return (1);
	}
	if (argc == 3)
	{
		x = ft_c2int(argv[1]);
		y = ft_c2int(argv[2]);
		if (x != -1 && y != -1)
			rush(x, y);
		else
		{
			write (1, "<file.out> [positive_number] [positive_number]!\n", 48);
			return (2);
		}
	}
	else
	{
		rush(5, 5);
	}
	return (0);
}

int	tf_c_len(char *c)
{
	int	i;

	i = 0;
	while (c[i] != 0)
	{
		i++;
	}
	return (i);
}

int	ft_exp(int i)
{
	int	n;
	int	exp;

	exp = 1;
	if (i == 0)
		return (exp);
	n = 0;
	while (n < i)
	{
		exp *= 10;
		n++;
	}
	return (exp);
}

int	ft_c2int(char *c)
{
	int	i;
	int	n;
	int	r;
	int	len;

	i = 0;
	r = 0;
	len = tf_c_len(c);
	while (i < len)
	{
		n = (int) c[i];
		if (n < 48 || n > 57)
			return (-1);
		r += (n -48) * (ft_exp(len - i -1));
		i++;
	}
	return (r);
}
