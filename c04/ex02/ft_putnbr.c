/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:50:41 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/20 14:25:14 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(42);
        write(1, "\n", 1);
	ft_putnbr(0);
        write(1, "\n", 1);
	ft_putnbr(2147483647);
        write(1, "\n", 1);
	ft_putnbr(-2147483648);
        write(1, "\n", 1);
	return (0);
}*/

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb < 10)
		ft_putchar(nb + 48);
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + 48);
	}
}
