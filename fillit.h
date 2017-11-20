/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecott <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 11:40:44 by alecott           #+#    #+#             */
/*   Updated: 2017/11/20 16:51:34 by alecott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include "libft.h"

int			main(int argc, char **argv);
char		*ft_algo(char *str, char **tab, size_t n);
size_t		ft_count_tetris(char *str);
char		*ft_create_string(size_t n);
size_t		ft_get_min_size(size_t t);
int			ft_isvalid(char *str);
size_t		ft_sqrt(size_t n);
int			ft_isvalid(char *str);
char		*ft_copy_tetris(char *str, char *t, size_t x, size_t size);
int			ft_del_last(char *str, char c, char *tetri);
size_t		ft_tablen(char **tab);
size_t		ft_sqrt(size_t n);
char		*ft_strcleaner(char *str, int n);
char		*ft_strreplace(char *str, unsigned char a, unsigned char b);
char		**ft_strnsplit(char *str, char c, size_t n);

#endif
