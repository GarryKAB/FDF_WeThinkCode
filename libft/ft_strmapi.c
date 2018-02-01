/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:11:06 by gkabongo          #+#    #+#             */
/*   Updated: 2017/08/31 11:11:18 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*temp;
	int		i;

	if (!s || !f)
		return (NULL);
	if (!(temp = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		temp[i] = f((unsigned int)i, s[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
