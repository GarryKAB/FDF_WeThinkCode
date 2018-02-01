/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 13:22:02 by gkabongo          #+#    #+#             */
/*   Updated: 2017/12/21 07:39:42 by gkabongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "../libft/libft.h"
# include "mlx.h"

# define BUFF_SIZE	32
# define RSET		"\x1B[0m"
# define KRED		"\x1B[31m"
# define KGRN		"\x1B[32m"
# define SCREEN_X	1920
# define SCREEN_Y	1080

typedef	struct		s_info
{
	int				map_row;
	int				x;
	int				y;
	double			map[500][500];
	double			c_map[500][500];
}					t_map;

typedef struct		s_points
{
	int				dx;
	int				dy;
	float			x;
	float			y;
	int				steps;
}					t_points;

typedef	struct		s_mlx
{
	void			*mlx;
	void			*window;
	int				height;
	int				width;
}					t_mlx;

typedef	struct		s_draw
{
	int				x_start;
	int				y_start;
	int				x_end;
	int				y_end;
	int				x;
	int				y;
}					t_draw;

int					get_next_line(const int fd, char **line);
void				get_x_and_y(char *str, t_map *map);
void				get_map(char *str, t_map *map);
int					ft_count(const char *s, char c);
void				ft_draw_map(t_map *map, t_mlx *mlx);
void				ft_dda_draw(t_draw *point, t_mlx *mlx, double z);
t_mlx				*ft_init_mlx(void);

#endif
