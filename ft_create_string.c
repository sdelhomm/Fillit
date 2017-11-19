/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecott <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 12:55:05 by alecott           #+#    #+#             */
/*   Updated: 2017/11/17 12:55:07 by alecott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_create_string(size_t n)
{
	int		i;
	int		j;
	int		k;
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
	printf("%s", str);
	return (str);
}

int		main(int ac, char **av)
{
	ft_create_string(4);
	return (0);
}
