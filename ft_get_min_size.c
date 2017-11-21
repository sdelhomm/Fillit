/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_min_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecott <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:36:36 by alecott           #+#    #+#             */
/*   Updated: 2017/11/21 11:36:38 by alecott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

size_t	ft_get_min_size(size_t t)
{
	size_t	n;

	n = ft_sqrt(t * 4);
	if (n * n == t)
		return (n);
	else
		return (n + 1);
}