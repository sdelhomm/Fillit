/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_tetris.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecott <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:37:12 by alecott           #+#    #+#             */
/*   Updated: 2017/11/21 11:37:14 by alecott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_copy_tetris(char *str, char *t, size_t x, size_t size)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (t[j] != '\n')
		j++;
	while (t[i] && str[x])
	{
		if (t[i] == '.')
			x++;
		else if (ft_isupper(t[i]))
			str[x++] = t[i];
		else if (t[i] == '\n')
			x = x + ((size + 1) - j);
		i++;
	}
	return (str);
}
