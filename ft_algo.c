/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecott <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:37:22 by alecott           #+#    #+#             */
/*   Updated: 2017/11/21 11:37:24 by alecott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_check_placement(size_t x, size_t n, char *str, char *tetri)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = x;
	while (tetri[i] && str[x])
	{
		if (ft_isupper(tetri[i]) && ft_isupper(str[x]))
			return (0);
		else if (tetri[i] != '\n' && str[x] == '\n')
			return (0);
		else if (tetri[i] == '\n' && tetri[i + 1])
		{
			x = n + y;
			y = x + 1;
		}
		else if (tetri[i] == '\n' && !tetri[i + 1])
			return (1);
		x++;
		i++;
		if (x >= ft_strlen(str))
			return (0);
	}
	return (1);
}

static int		ft_gestion_tetri(char *str, char **tetri, size_t n, size_t i)
{
	size_t	x;

	x = 0;
	while (str[x])
	{
		if (str[x] == '\n' && !str[x + 1])
		{
			if (i == 0)
				return (-1);
			i--;
			x = ft_del_last(str, 'A' + i, tetri[i]);
		}
		else if (ft_check_placement(x, n, str, tetri[i]))
		{
			str = ft_copy_tetris(str, tetri[i], x, n);
			return (i);
		}
		x++;
	}
	return (i);
}

char			*ft_algo(char *str, char **tab, size_t n)
{
	int		i;
	int		t;

	t = ft_tablen(tab);
	i = 0;
	while (i < t)
	{
		i = ft_gestion_tetri(str, tab, n, i);
		if (i == -1)
			return (ft_algo(ft_create_string(n + 1), tab, n + 1));
		i++;
	}
	return (str);
}
