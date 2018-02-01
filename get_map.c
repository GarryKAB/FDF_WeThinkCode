/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 15:33:06 by gkabongo          #+#    #+#             */
/*   Updated: 2017/12/20 15:40:49 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fdf.h"

void		get_map(char *str, t_map *map)
{
	int		x;
	int		y;
	int		fd;
	char	**split;
	char	*single_line;

	y = 0;
	fd = open(str, O_RDONLY);
	while (get_next_line(fd, &single_line) > 0 && y < map->y)
	{
		if ((ft_count(single_line, ' ')) >= map->map_row)
		{
			split = ft_strsplit(single_line, ' ');
			x = 0;
			while (x < map->x)
			{
				map->map[y][x] = (double)ft_atoi(split[x]);
				x++;
			}
			y++;
		}
		else
			ft_putendl(KRED"Map error!"RSET);
	}
	close(fd);
}
