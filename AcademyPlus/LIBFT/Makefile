# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efloare <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/02 17:18:14 by efloare           #+#    #+#              #
#    Updated: 2015/11/03 18:10:19 by efloare          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ft_*.c

HEADERS = libft.h

OBJECTS = $(subst .c,.o,$(SOURCES))

WFLAGS = -Wall -Werror -Wextra -I includes

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)


$(OBJECTS): $(SOURCES) $(HEADERS)
	@gcc $(WFLAGS) -c $(SOURCES)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
