/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecott <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:36:05 by alecott           #+#    #+#             */
/*   Updated: 2017/11/21 11:36:09 by alecott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*tab;
	size_t			i;

	i = 0;
	tab = (unsigned char*)malloc(sizeof(unsigned char) * size);
	if (tab == NULL)
		return (NULL);
	while (i < size)
		tab[i++] = 0;
	return (tab);
}
