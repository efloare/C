# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efloare <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/15 14:06:16 by efloare           #+#    #+#              #
#    Updated: 2016/02/15 14:10:52 by efloare          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test_gnl

SRCS = get_next_line.c main.c

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	make -C libft/ fclean
	make -C libft/
	gcc -Wall -Werror -Wextra -I libft/includes/ -c $(SRCS)
	gcc -o $(NAME) $(OBJ) -L libft/ -lft

clean:
	/bin/rm -f $(OBJ)
	make -C libft/ clean

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f libft/libft.a

re: fclean all
