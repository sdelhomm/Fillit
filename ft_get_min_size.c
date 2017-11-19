/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_min_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecott <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 12:53:53 by alecott           #+#    #+#             */
/*   Updated: 2017/11/19 16:51:53 by alecott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

size_t	ft_get_min_size(size_t t)
{
	size_t	n;

	n = ft_sqrt(t * 4);
	if (n * n == t)
		return (n);
	else
		return (n + 1);
}

int		main()
{
	printf("%ld\n", ft_get_min_size(5));
	return (0);
}
