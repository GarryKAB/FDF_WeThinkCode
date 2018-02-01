/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:10:23 by gkabongo          #+#    #+#             */
/*   Updated: 2017/08/31 11:10:26 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*pdst;
	char	*psrc;
	size_t	len;

	pdst = (char *)ft_memchr(dest, '\0', size);
	if (pdst == NULL)
		return (size + ft_strlen(src));
	psrc = (char *)src;
	len = (size_t)(pdst - dest) + ft_strlen(psrc);
	while ((size_t)(pdst - dest) < size - 1 && psrc != '\0')
	{
		*pdst = *psrc;
		pdst++;
		psrc++;
	}
	*pdst = '\0';
	return (len);
}
