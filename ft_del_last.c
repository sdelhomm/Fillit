/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecott <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:36:44 by alecott           #+#    #+#             */
/*   Updated: 2017/11/21 11:36:45 by alecott          ###   ########.fr       */
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
