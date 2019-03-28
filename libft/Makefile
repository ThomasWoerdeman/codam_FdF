NAME = libft.a
SRC = ft_*.c
INCLUDES = libft.h

all: $(NAME)

$(NAME):
	@gcc -c -I./ $(SRC) -Wall -Werror -Wextra
	@ar -r $(NAME) ft_*.o $(INCLUDES)

clean:
	@rm -f ./ft_*.o

fclean: clean
	@rm -f ./$(NAME)

re: fclean all