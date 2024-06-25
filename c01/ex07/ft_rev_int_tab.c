/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 19:15:44 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/10 20:29:03 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main()
{	int	tab[5] = {1, 5, 7, 9, 10};
	int	size;
	int	i;

	size = 5;
	ft_rev_int_tab(tab,size);
	i = 0;
	while (i < size)
	{
		printf("%d",tab[i]);
		i++;
	}
	return (0);
}*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
