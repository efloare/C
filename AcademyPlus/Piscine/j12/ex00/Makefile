# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efloare <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/18 10:58:04 by efloare           #+#    #+#              #
#    Updated: 2015/09/18 10:59:22 by efloare          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

all: $(NAME)

$(NAME):
		gcc -c -Wall -Werror -Wextra $(SRC)
		gcc -o $(NAME) ft_display_file.o

clean:
		rm -f ft_display_file.o

fclean: clean
		rm -f $(NAME)

re: fclean all
