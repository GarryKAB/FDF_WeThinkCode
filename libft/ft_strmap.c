/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:10:55 by gkabongo          #+#    #+#             */
/*   Updated: 2017/08/31 11:10:58 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	char	*str;
	int		counter1;

	counter1 = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	while (s[counter1] != '\0' && f)
	{
		str[counter1] = f(s[counter1]);
		counter1++;
	}
	str[counter1] = '\0';
	return (str);
}
