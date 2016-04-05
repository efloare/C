# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efloare <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/15 13:08:46 by efloare           #+#    #+#              #
#    Updated: 2015/09/15 13:12:27 by efloare          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = awesomeprog

SRC = source.c

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC)
clean:
	/bin/rm -f *o
fclean : clean
	/bin/rm -f $(NAME)
re: fclean all
