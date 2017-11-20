/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecott <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 12:55:05 by alecott           #+#    #+#             */
/*   Updated: 2017/11/20 16:31:47 by alecott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_create_string(size_t n)
{
	int		i;
	size_t	j;
	size_t	k;
	char	*str;

	i = 0;
	j = 0;
	k = 0;
	str = (char*)malloc(((n * n) + (n + 1)) * sizeof(str));
	while (j < n)
	{
		k = 0;
		while (k < n)
		{
			str[i] = '.';
			i++;
			k++;
		}
		str[i] = '\n';
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
