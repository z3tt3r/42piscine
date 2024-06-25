/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusil <mmusil@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 16:00:14 by mmusil            #+#    #+#             */
/*   Updated: 2024/06/10 11:52:06 by mmusil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main()
{
	int	num;
	int	*ptr1 = &num;
	int	**ptr2 = &ptr1;
	int	***ptr3 = &ptr2;
	int	****ptr4 = &ptr3;
	int	*****ptr5 = &ptr4;
	int	******ptr6 = &ptr5;
	int	*******ptr7 = &ptr6;
	int	********ptr8 = &ptr7;

	ft_ultimate_ft(&ptr8);
	printf("%d", num);
	return(0);

}*/

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
