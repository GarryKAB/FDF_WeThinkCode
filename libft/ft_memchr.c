/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 10:59:54 by gkabongo          #+#    #+#             */
/*   Updated: 2017/08/31 10:59:57 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			counter1;
	unsigned char	*ps;

	counter1 = 0;
	ps = (unsigned char *)s;
	while (counter1 < n)
	{
		if (ps[counter1] == (unsigned char)c)
			return (ps + counter1);
		counter1++;
	}
	return (NULL);
}
