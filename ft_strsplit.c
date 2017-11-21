/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecott <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:34:30 by alecott           #+#    #+#             */
/*   Updated: 2017/11/21 11:34:47 by alecott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_while(char const *s, char c, char **tab)
{
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i > start)
			tab[j++] = ft_strsub(s, start, i - start);
	}
	tab[j] = NULL;
	return (tab);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	while (s[i++])
	{
		if (s[i - 1] != c && (s[i] == c || s[i] == '\0'))
			j++;
	}
	tab = (char**)malloc(sizeof(char*) * (j + 1));
	if (tab == NULL)
		return (NULL);
	return (ft_while(s, c, tab));
}
