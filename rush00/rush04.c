/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 13:35:56 by honnguye          #+#    #+#             */
/*   Updated: 2024/06/09 13:38:18 by honnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	print_line(int x, int left, int centre, int right)
{
	int	i;

	i = 1;
	if (x > 0)
		ft_putchar(left);
	while (i < (x - 1))
	{
		ft_putchar(centre);
		i++;
	}
	if (x > 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x > 0 && y > 0)
		print_line(x, 'A', 'B', 'C');
	while (i < y - 1 && x > 0)
	{
		print_line(x, 'B', ' ', 'B');
		i++;
	}
	if (y > 1 && x > 0)
		print_line(x, 'C', 'B', 'A');
}
