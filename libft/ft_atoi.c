/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 10:55:12 by gkabongo          #+#    #+#             */
/*   Updated: 2017/08/31 10:55:16 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		spaces(const char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\f'
		|| c == '\v' || c == '\r')
		return (1);
	return (0);
}

int				ft_atoi(const char *str)
{
	long	nbr;
	int		sign;

	nbr = 0;
	sign = 1;
	while (spaces(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = sign * (-1);
		str++;
	}
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		nbr = nbr * 10 + (*str) - '0';
		str++;
	}
	return (nbr * sign);
}
