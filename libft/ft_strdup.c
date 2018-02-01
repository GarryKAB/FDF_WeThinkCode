/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:18:10 by gkabongo          #+#    #+#             */
/*   Updated: 2017/08/31 11:18:14 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*str2;
	int		counter1;
	int		len;

	len = ft_strlen(str1);
	counter1 = 0;
	if (!(str2 = (char *)malloc(sizeof(*str1) * (len + 1))))
		return (NULL);
	while (counter1 < len)
	{
		str2[counter1] = str1[counter1];
		counter1++;
	}
	str2[counter1] = '\0';
	return (str2);
}
