/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:00:21 by gkabongo          #+#    #+#             */
/*   Updated: 2017/08/31 11:00:38 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		counter1;
	char	*pdest;
	char	*psrc;

	counter1 = 0;
	pdest = (char *)dest;
	psrc = (char *)src;
	while (counter1 < (int)n)
	{
		pdest[counter1] = psrc[counter1];
		counter1++;
	}
	return ((void *)pdest);
}
