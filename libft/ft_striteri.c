/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:09:14 by gkabongo          #+#    #+#             */
/*   Updated: 2017/08/31 11:09:19 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	int counter1;

	counter1 = 0;
	if (!s || !f)
		return ;
	while (s[counter1] != '\0')
	{
		f(counter1, &s[counter1]);
		counter1++;
	}
}
