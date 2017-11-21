/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecott <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:37:49 by alecott           #+#    #+#             */
/*   Updated: 2017/11/21 11:37:57 by alecott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

size_t				ft_strlen(const char *s);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strcat(char *s1, char *s2);
void				*ft_memalloc(size_t size);
char				*ft_strsub(const char *s1, unsigned int start, size_t len);
char				**ft_strsplit(const char *s, char c);
void				ft_putstr(const char *s);
int					ft_isupper(int c);

#endif
