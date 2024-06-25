/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksorokol <ksorokol@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-09 11:20:03 by ksorokol          #+#    #+#             */
/*   Updated: 2024/06/09 15:27:17 by honnguye         ###   ########.fr       */
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
		print_line(x, 'A', 'B', 'A');
	while (i < y - 1 && x > 0)
	{
		print_line(x, 'B', ' ', 'B');
		i++;
	}
	if (y > 1 && x > 0)
		print_line(x, 'C', 'B', 'C');
}
