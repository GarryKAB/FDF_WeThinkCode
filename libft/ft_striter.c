/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:08:39 by gkabongo          #+#    #+#             */
/*   Updated: 2017/08/31 11:08:44 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int counter1;

	counter1 = 0;
	if (!s || !f)
		return ;
	while (s[counter1] != '\0')
	{
		f(&s[counter1]);
		counter1++;
	}
}
