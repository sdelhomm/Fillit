# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alecott <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/21 11:03:18 by alecott           #+#    #+#              #
#    Updated: 2017/11/22 09:30:28 by alecott          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FT_SRC = main.c ft_isvalid.c ft_count_tetris.c ft_create_string.c\
		ft_get_min_size.c ft_sqrt.c ft_strreplace.c ft_algo.c\
	   	ft_del_last.c ft_copy_tetris.c ft_tablen.c ft_strcleaner.c

LIB_SRC = ./libft/ft_putstr.c ./libft/ft_isupper.c ./libft/ft_strsplit.c\
		  ./libft/ft_strsub.c ./libft/ft_memalloc.c ./libft/ft_strlen.c\
		  ./libft/ft_strcat.c ./libft/ft_strncpy.c ./libft/ft_bzero.c\
		  ./libft/ft_count_words.c ./libft/ft_memset.c

INC = fillit.h ./libft/libft.h

OBJ = $(FT_SRC:.c=.o) $(LIB_SRC:.c=.o)

all: $(NAME)

$(NAME): $(FT_SRC)
	@gcc $(FT_SRC) $(LIB_SRC) -Werror -Wall -Wextra -o $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME) $(LIB)

re: fclean $(NAME)

.PHONY: all clean fclean re
