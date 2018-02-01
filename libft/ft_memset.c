/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:02:03 by gkabongo          #+#    #+#             */
/*   Updated: 2017/08/31 11:02:07 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	int		counter1;

	str = b;
	counter1 = 0;
	while (counter1 < (int)len)
	{
		str[counter1] = c;
		counter1++;
	}
	return (str);
}
