/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecott <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:36:52 by alecott           #+#    #+#             */
/*   Updated: 2017/11/22 09:26:38 by alecott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_create_string(size_t n)
{
	int		i;
	size_t	x;
	size_t	y;
	char	*str;

	str = (char*)malloc(sizeof(char) * (n * (n + 1) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	x = 0;
	while (x++ < n)
	{
		y = 0;
		while (y++ < n)
			str[i++] = '.';
		str[i++] = '\n';
	}
	str[i] = '\0';
	return (str);
}
