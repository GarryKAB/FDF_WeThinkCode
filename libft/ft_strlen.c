/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:10:35 by gkabongo          #+#    #+#             */
/*   Updated: 2017/08/31 11:10:41 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *str)
{
	size_t counter1;

	counter1 = 0;
	while (str[counter1] != '\0')
	{
		counter1++;
	}
	return (counter1);
}
