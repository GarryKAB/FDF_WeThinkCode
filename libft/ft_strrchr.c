/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:13:34 by gkabongo          #+#    #+#             */
/*   Updated: 2017/08/31 11:13:39 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int		counter1;

	counter1 = ft_strlen(str);
	while (counter1 >= 0)
	{
		if (str[counter1] == (char)c)
		{
			return (&str[counter1]);
		}
		counter1--;
	}
	return (NULL);
}
