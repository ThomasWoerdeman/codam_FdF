# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: twoerdem <twoerdem@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/03/07 17:52:15 by twoerdem       #+#    #+#                 #
#    Updated: 2019/03/25 14:08:00 by twoerdem      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME =	fdf
SRCS =	main.c\
		fdf.c\
		convert_map.c\
		calculate_angle.c\
		draw_map.c\
		handle_keypess.c
FLAGS = -Wall -Werror -Wextra
INCLUDES = -I fdf.h -L minilibx_macos -lmlx -L./libft -lft -framework OpenGL -framework AppKit

all: $(NAME)

$(NAME):
	@make -C libft/ re
	@gcc -o $(NAME) $(FLAGS) $(SRCS) $(INCLUDES)

clean:
	@make -C libft/ clean
	@rm -f *.o

fclean: clean
	@make -C libft/ fclean
	@rm -f ./$(NAME)

re: fclean all
