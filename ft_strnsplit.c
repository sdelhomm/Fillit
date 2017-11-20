/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnsplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecott <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 09:12:23 by alecott           #+#    #+#             */
/*   Updated: 2017/11/20 16:28:36 by alecott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	**ft_while(char *str, char c, char **tab, size_t n)
{
	int		i;
	int		j;
	size_t	k;
	int		start;

	i = 0;
	j = 0;
	while (str[i])
	{
		start = i;
		k = 0;
		while (k < n)
		{
			while (str[i] != c && str[i] != '\0')
				i++;
			i++;
			k++;
		}
		while (str[i] != '\n')
			i++;
		if (i++ > start)
			tab[j++] = ft_strsub(str, start, i - start);
	}
	tab[j] = NULL;
	return (tab);
}

char		**ft_strnsplit(char *str, char c, size_t n)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		if (str[i] == c)
			j++;
		i++;
	}
	if (j % n)
		j++;
	j = j / n;
	tab = (char**)ft_memalloc(sizeof(char*) * (j + 1));
	if (tab == NULL)
		return (NULL);
	return (ft_while(str, c, tab, n));
}
