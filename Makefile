# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alecott <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/15 09:31:31 by alecott           #+#    #+#              #
#    Updated: 2017/11/15 13:30:04 by alecott          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCS = fillit.c

OBJ = fillit.o

all:
	@/bin/gcc $(SRCS) -L. lft - Werror -Wextra -Wall -o $(NAME)

clean:
	@/bin/rm -rf $(OBJ)

fclean: clean
	@/bin/rm-rf $(NAME)

re: fclean all
