/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dda_draw.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 13:53:16 by gkabongo          #+#    #+#             */
/*   Updated: 2017/12/21 07:37:16 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fdf.h"

int		abs(int n)
{
	return ((n > 0) ? n : (n * (-1)));
}

int		calculation(t_points *set, t_draw *point)
{
	set->dx = point->x_end - point->x_start;
	set->dy = point->y_end - point->y_start;
	if (abs(set->dx) > abs(set->dy))
		set->steps = abs(set->dx);
	else
		set->steps = abs(set->dy);
	set->x = point->x_start;
	set->y = point->y_start;
	return (set->steps);
}

void	ft_dda_draw(t_draw *point, t_mlx *mlx, double z)
{
	t_points		set;
	int				steps;
	int				i;
	float			x_inc;
	float			y_inc;

	steps = calculation(&set, point);
	x_inc = set.dx / (float)steps;
	y_inc = set.dy / (float)steps;
	i = 0;
	while (i <= steps)
	{
		if (z > 0)
			mlx_pixel_put(mlx->mlx, mlx->window, set.x, set.y, 0x8470FF);
		else if (z < 0)
			mlx_pixel_put(mlx->mlx, mlx->window, set.x, set.y, 0x0042F45F);
		else
			mlx_pixel_put(mlx->mlx, mlx->window, set.x, set.y, 0x0000FF);
		set.x += x_inc;
		set.y += y_inc;
		i++;
	}
}
