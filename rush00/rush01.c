/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksorokol <ksorokol@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-09 12:46:55 by ksorokol          #+#    #+#             */
/*   Updated: 2024-06-09 12:46:55 by ksorokol         ###   ########.fr       */
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
		print_line(x, '/', '*', '\\');
	while (i < y - 1 && x > 0)
	{
		print_line(x, '*', ' ', '*');
		i++;
	}
	if (y > 1 && x > 0)
		print_line(x, '\\', '*', '/');
}
