/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 15:57:31 by gkabongo          #+#    #+#             */
/*   Updated: 2017/12/21 07:37:26 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fdf.h"

void	init_points_x(int x, int y, t_draw *point, t_map *map)
{
	point->x_start = (int)map->c_map[y][x] / 10000;
	point->y_start = (int)map->c_map[y][x] % 10000;
	point->x_end = (int)map->c_map[y][x + 1] / 10000;
	point->y_end = (int)map->c_map[y][x + 1] % 10000;
}

void	init_points_y(int x, int y, t_draw *point, t_map *map)
{
	point->x_start = (int)map->c_map[y][x] / 10000;
	point->y_start = (int)map->c_map[y][x] % 10000;
	point->x_end = (int)map->c_map[y + 1][x] / 10000;
	point->y_end = (int)map->c_map[y + 1][x] % 10000;
}

void	ft_draw_map(t_map *map, t_mlx *mlx)
{
	t_draw	point;

	point.y = -1;
	while (++point.y < map->y)
	{
		point.x = -1;
		while (++point.x < map->x - 1)
		{
			init_points_x(point.x, point.y, &point, map);
			ft_dda_draw(&point, mlx, map->map[point.y][point.x]);
		}
	}
	point.x = -1;
	while (++point.x < map->x)
	{
		point.y = -1;
		while (++point.y < map->y - 1)
		{
			init_points_y(point.x, point.y, &point, map);
			ft_dda_draw(&point, mlx, map->map[point.y][point.x]);
		}
	}
}
