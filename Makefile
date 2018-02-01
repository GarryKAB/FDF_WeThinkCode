# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkabongo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/24 09:15:08 by gkabongo          #+#    #+#              #
#    Updated: 2017/12/21 07:52:34 by gkabongo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRC = main.c\
	  get_next_line.c\
	  get_x_and_y.c\
	  get_map.c\
	  ft_count.c\
	  ft_draw_map.c\
	  ft_dda_draw.c\
	  ft_init_mlx.c\

LIB = ./libft/libft.a

INCLUDES = -I./libft/ -I./includes/

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
		make -C libft/ fclean && make -C libft/
		@gcc -Wall -Wextra -Werror -c $(SRC)
		@gcc -Wall -Wextra -Werror -lm -L libft/ -lmlx -framework OpenGL -framework AppKit $(OBJ) $(LIB) $(INCLUDES) -o $(NAME)

clean:
		/bin/rm -f $(OBJ)
		make -C libft/clean

fclean:
		/bin/rm -f $(NAME)
		/bin/rm -f libft/libft.a
		/bin/rm -f *.o
		/bin/rm -f libft/*.o

re: fclean all
