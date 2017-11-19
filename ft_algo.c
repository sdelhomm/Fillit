/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecott <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 09:49:07 by alecott           #+#    #+#             */
/*   Updated: 2017/11/17 12:50:14 by alecott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_check_placement(size_t i, size_t n, char *str, char *tetri)
{
	size_t	j;
	size_t	y;

	j = 0;
	y = i;
	while (tetri[j] && str[i])
	{
		if (tetri[j] == '#' && str[i] == '#')
			return (0);
		else if (tetri[j] == '\n' && tetri[j++] != '\0')
		{
			i =  n + y;
			y = i + 1;
		}
		i++;
		j++;
	}
	if (i > ft_strlen(str))
		return (0);
	return (1);
}

static char	*ft_placement_tetri(char *str, char *tetri, size_t n)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (!(ft_check_placement(i, n, str, tetri)) && i == 0)
			n++;
		else if (!(ft_check_placement(i, n , str, tetri)) && i != 0)
			i++;
		else if (!(ft_check_placement(i, n , str, tetri)) && i != 0 && q)
		else
			str = ft_tetri_lettres(str, tetri, i, n);
	}
	return (str);
}

char	*ft_algo(char *str, char **tab, size_t n)
{
	int		i;
	int		j;
	char	c;

	j = 0;
	c = 
	while (tab[j])
	{
		str = ft_placement_tetri(str, tab[j], n)
		if (!(ft_verif_tetri()))
		{
			
			
			
		}
		j++;
	}
	return (str);
}

