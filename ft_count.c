/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 13:52:48 by gkabongo          #+#    #+#             */
/*   Updated: 2017/12/21 07:37:05 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fdf.h"

int		ft_count(const char *s, char c)
{
	int		counter;
	int		str;

	str = 0;
	counter = 0;
	while (*s != '\0')
	{
		if (str == 1 && *s == c)
			str = 0;
		if (str == 0 && *s != c)
		{
			str = 1;
			counter++;
		}
		s++;
	}
	return (counter);
}
