/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecott <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:34:56 by alecott           #+#    #+#             */
/*   Updated: 2017/11/21 11:34:58 by alecott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_strreplace(char *str, unsigned char a, unsigned char b)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == a)
			str[i] = b;
		i++;
	}
	return (str);
}
