/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:13:17 by gkabongo          #+#    #+#             */
/*   Updated: 2017/08/31 11:13:26 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	size;

	if (*little == '\0')
		return ((char*)big);
	size = ft_strlen((char *)little);
	while (*big != '\0' && len-- >= size)
	{
		if (*big == *little && ft_strncmp(big, little, size) == 0)
			return ((char*)big);
		big++;
	}
	return (NULL);
}
