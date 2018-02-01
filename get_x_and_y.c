/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_x_and_y.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 15:31:47 by gkabongo          #+#    #+#             */
/*   Updated: 2017/12/20 15:33:01 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fdf.h"

void		get_x_and_y(char *str, t_map *map)
{
	char	*single_line;
	int		buff;
	int		y_inc;
	int		fd;

	fd = open(str, O_RDONLY);
	single_line = NULL;
	y_inc = 1;
	if (get_next_line(fd, &single_line) > 0)
		buff = ft_count(single_line, ' ');
	while (get_next_line(fd, &single_line) > 0)
		y_inc++;
	map->map_row = buff;
	map->x = buff;
	map->y = y_inc;
	close(fd);
}
