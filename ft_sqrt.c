/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecott <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:35:45 by alecott           #+#    #+#             */
/*   Updated: 2017/11/21 11:35:47 by alecott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

size_t	ft_sqrt(size_t n)
{
	size_t	i;

	i = 0;
	while (i * i < n)
		i++;
	return (i - 1);
}
