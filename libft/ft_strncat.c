/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:11:31 by gkabongo          #+#    #+#             */
/*   Updated: 2017/08/31 11:11:38 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, char const *s2, size_t n)
{
	size_t		counter1;
	size_t		len1;

	len1 = ft_strlen(s1);
	counter1 = 0;
	while (s2[counter1] != '\0' && n > counter1)
	{
		s1[len1 + counter1] = s2[counter1];
		counter1++;
	}
	s1[counter1 + len1] = '\0';
	return (s1);
}
