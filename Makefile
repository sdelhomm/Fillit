# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alecott <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/21 11:03:18 by alecott           #+#    #+#              #
#    Updated: 2017/11/21 11:03:20 by alecott          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FT_SRC = main.c ft_isvalid.c ft_count_tetris.c ft_create_string.c\
		ft_get_min_size.c ft_sqrt.c ft_strreplace.c ft_algo.c\
	   	ft_del_last.c ft_copy_tetris.c ft_tablen.c ft_strcleaner.c

LIB = libft.a

LIB_SRC = ft_putstr.c ft_isupper.c ft_strsplit.c ft_strsub.c ft_memalloc.c\
		  ft_strlen.c ft_strcat.c ft_strncpy.c\

LIB_OBJ = ft_putstr.o ft_isupper.o ft_strsplit.o ft_strsub.o ft_memalloc.o\
		  ft_strlen.o ft_strcat.o ft_strncpy.o\

all: $(NAME)

$(NAME):
	@gcc -c $(LIB_SRC) -Werror -Wall -Wextra
	@ar rc $(LIB) $(LIB_OBJ)
	@ranlib $(LIB)
	@gcc $(FT_SRC) -L. $(LIB) -o $(NAME)

clean:
	@/bin/rm -f $(LIB_OBJ)

fclean: clean
	@/bin/rm -f $(NAME) $(LIB)

re: fclean $(NAME)

.PHONY: all clean fclean re
