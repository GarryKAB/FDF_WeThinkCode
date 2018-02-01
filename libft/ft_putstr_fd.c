/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 11:06:17 by gkabongo          #+#    #+#             */
/*   Updated: 2017/08/31 11:06:28 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int counter1;

	counter1 = 0;
	while (s[counter1] != '\0')
	{
		write(fd, &s[counter1], 1);
		counter1++;
	}
}
