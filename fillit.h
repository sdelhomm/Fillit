/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecott <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:37:31 by alecott           #+#    #+#             */
/*   Updated: 2017/11/21 11:37:33 by alecott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"
# include <fcntl.h>

char		*ft_copy_tetris(char *str, char *t, size_t x, size_t size);
int			main(int argc, char **argv);
int			ft_isvalid(char *str);
int			ft_del_last(char *str, char c, char *tetri);
size_t		ft_count_tetris(char *str);
size_t		ft_tablen(char **tab);
size_t		ft_get_min_size(size_t t);
size_t		ft_sqrt(size_t n);
char		*ft_create_string(size_t n);
char		*ft_strcleaner(char *str);
char		*ft_strreplace(char *str, unsigned char a, unsigned char b);
char		*ft_algo(char *str, char **tab, size_t n);

#endif
