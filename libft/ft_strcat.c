/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:06:40 by gkabongo          #+#    #+#             */
/*   Updated: 2017/08/31 11:06:45 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *str1, const char *str2)
{
	int counter1;
	int len1;

	len1 = ft_strlen(str1);
	counter1 = 0;
	while (str2[counter1] != '\0')
	{
		str1[len1 + counter1] = str2[counter1];
		counter1++;
	}
	str1[len1 + counter1] = '\0';
	return (str1);
}
