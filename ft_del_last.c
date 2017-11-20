/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecott <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 09:11:52 by alecott           #+#    #+#             */
/*   Updated: 2017/11/20 15:58:36 by alecott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_del_last(char *str, char c, char *tetri)
{
	int		i;
	int		j;
	int		n;

	n = 0;
	while (tetri[n] == '.')
		n++;
	i = 0;
	j = -1;
	while (str[i])
	{
		if (str[i] == c && j == -1)
			j = i - n;
		if (str[i] == c)
			str[i] = '.';
		i++;
	}
	return (j);
}
