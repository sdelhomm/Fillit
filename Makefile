# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alecott <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/21 11:03:18 by alecott           #+#    #+#              #
#    Updated: 2017/11/22 11:43:32 by alecott          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

LIB_NAME = libft.a

FT_SRC = main.c ft_isvalid.c ft_count_tetris.c ft_create_string.c\
		ft_get_min_size.c ft_sqrt.c ft_strreplace.c ft_algo.c\
	   	ft_del_last.c ft_copy_tetris.c ft_tablen.c ft_strcleaner.c

LIB_SRC = ./libft/ft_putstr.c ./libft/ft_isupper.c ./libft/ft_strsplit.c\
		  ./libft/ft_strsub.c ./libft/ft_memalloc.c ./libft/ft_strlen.c\
		  ./libft/ft_strcat.c ./libft/ft_strncpy.c ./libft/ft_bzero.c\
		  ./libft/ft_count_words.c ./libft/ft_memset.c

INC = fillit.h

LIB_OBJ = ft_putstr.o ft_isupper.o ft_strsplit.o ft_strsub.o ft_memalloc.o\
		  ft_strlen.o ft_strcat.o ft_strncpy.o ft_bzero.o ft_count_words.o\
		  ft_memset.o

all: $(NAME)

$(NAME): $(LIB_SRCS) $(INC)
	@gcc -c $(LIB_SRC)
	@ar rc $(LIB_NAME) $(LIB_OBJ)
	@ranlib $(LIB_NAME)
	@gcc $(FT_SRC) -L. -lft -Werror -Wall -Wextra -o $(NAME)

clean:
	@/bin/rm -f $(LIB_OBJ)

fclean: clean
	@/bin/rm -f $(NAME) $(LIB_NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
