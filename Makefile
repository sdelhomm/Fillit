# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alecott <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/20 09:10:56 by alecott           #+#    #+#              #
#    Updated: 2017/11/20 16:36:45 by alecott          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCS = main.c ft_isvalid.c ft_count_tetris.c ft_create_string.c\
		ft_get_min_size.c ft_sqrt.c ft_strnsplit.c ft_puttab.c\
	   	ft_strreplace.c ft_algo.c ft_del_last.c ft_copy_tetris.c ft_tablen.c\
		ft_strcleaner.c

OBJS = main.o ft_isvalid.o ft_count_tetris.o ft_create_string.o\
		ft_get_min_size.o ft_sqrt.o ft_strnsplit.o ft_puttab.o\
	   	ft_strreplace.o ft_algo.o ft_del_last.o ft_copy_tetris.o ft_tablen.o\
		ft_strcleaner.o

LIBS = libft.a

HEADS = libft.h fillit.h

all: $(NAME)

$(NAME):
	@gcc $(SRCS) -L. $(LIBS) -o $(NAME) -Wall -Wextra -Werror

clean:
	@/bin/rm -f $(OBJS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
