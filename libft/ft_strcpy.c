/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:07:57 by gkabongo          #+#    #+#             */
/*   Updated: 2017/08/31 11:08:03 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char const *src)
{
	int counter1;

	counter1 = 0;
	while (src[counter1] != '\0')
	{
		dest[counter1] = src[counter1];
		counter1++;
	}
	dest[counter1] = '\0';
	return (dest);
}
