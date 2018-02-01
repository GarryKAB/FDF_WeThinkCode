/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:08:26 by gkabongo          #+#    #+#             */
/*   Updated: 2017/08/31 11:08:30 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int result1;

	if (!s1 || !s2)
		return (0);
	result1 = ft_strcmp((char *)s1, (char *)s2);
	if (result1 == 0)
		return (1);
	else
		return (0);
}
