/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 10:59:44 by gkabongo          #+#    #+#             */
/*   Updated: 2017/08/31 10:59:48 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void const *src, int c, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;
	size_t			counter1;

	counter1 = 0;
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	while (counter1 < n)
	{
		pdest[counter1] = psrc[counter1];
		if (psrc[counter1] == (unsigned char)c)
			return (pdest + counter1 + 1);
		counter1++;
	}
	return (NULL);
}
