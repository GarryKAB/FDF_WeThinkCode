/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 13:45:06 by gkabongo          #+#    #+#             */
/*   Updated: 2018/02/01 09:50:28 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fdf.h"
#include "mlx.h"

int			my_key_funct(int keycode, void *param)
{
	param = NULL;
	if (keycode == 53 || keycode == 12)
	{
		ft_putendl(KGRN"esc!"RSET);
		exit(0);
	}
	return (0);
}

void		rot_map(t_map *map)
{
	int		x;
	int		y;
	int		iso_x;
	int		iso_y;
	int		scale;

	scale = 15;
	y = -1;
	while (++y < map->y)
	{
		x = -1;
		while (++x < map->x)
		{
			iso_x = ((x * scale) - (y * scale)) + 700;
			iso_y = (((x * scale) + (y * scale)) / 2) + 300 - map->map[y][x];
			map->c_map[y][x] = iso_x * 10000 + iso_y;
		}
	}
}

int			main(int ac, char *av[])
{
	t_map		map;
	t_mlx		*mlx;

	mlx = ft_init_mlx();
	if (ac < 2)
	{
		ft_putendl(KRED"No map selected"RSET);
		exit(0);
	}
	else if (ac > 2)
	{
		ft_putendl(KRED"Too many arguments"RSET);
		exit(0);
	}
	else
	{
		get_x_and_y(av[1], &map);
		get_map(av[1], &map);
		rot_map(&map);
		ft_draw_map(&map, mlx);
	}
	mlx_key_hook(mlx->window, my_key_funct, 0);
	mlx_loop(mlx);
	return (0);
}
