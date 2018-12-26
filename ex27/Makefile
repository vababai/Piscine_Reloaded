# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kjacks <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/23 21:48:12 by kjacks            #+#    #+#              #
#    Updated: 2018/11/23 21:48:16 by kjacks           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_display_file.c
OBJ = ft_putchar.o ft_putstr.o ft_display_file.o

all: $(NAME)
$(NAME):
	gcc -c -Wall -Wextra -Werror -I includes $(SRC)
	gcc -o $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
