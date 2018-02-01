/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:04:15 by gkabongo          #+#    #+#             */
/*   Updated: 2017/08/31 11:04:26 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long number1;

	number1 = (long)n;
	if (number1 < 0)
	{
		ft_putchar('-');
		number1 = number1 * (-1);
	}
	if (number1 > 9)
	{
		ft_putnbr(number1 / 10);
		number1 = (number1 % 10);
	}
	ft_putchar(number1 + '0');
}
