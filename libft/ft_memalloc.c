/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 10:59:34 by gkabongo          #+#    #+#             */
/*   Updated: 2017/08/31 10:59:38 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem1;

	if (!(mem1 = (void *)malloc(sizeof(mem1) * (size))) || !size)
		return (NULL);
	mem1 = ft_memset(mem1, 0, size);
	return (mem1);
}
