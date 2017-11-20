/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcleaner.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecott <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 16:36:15 by alecott           #+#    #+#             */
/*   Updated: 2017/11/20 16:37:04 by alecott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	*replace_void(char *str)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (str[i] == '.' && str[i + 5] == '.' && 
			str[i + 10] == '.' && str[i + 15] == '.')
		{
			str[i] = 'x';
			str[i + 5] = 'x';
			str[i + 10] = 'x';
			str[i + 15] = 'x';
		}
		i++;
	}
	i = 0;
	while (i < 20)
	{
		if ((str[i] == '.' || str[i] == 'x') 
			&& (str[i + 1] == '.' || str[i + 1] == 'x')
		 && (str[i + 2] == '.' || str[i + 2] == 'x') 
		 && (str[i + 3] == '.' || str[i + 3] == 'x'))
		{
			str[i] = 'x';
			str[i + 1] = 'x';
			str[i + 2] = 'x';
			str[i + 3] = 'x';
		}
		i += 5;
	}
	return (str);
}

static char 	*str_malloc_1(char *str)
{
	char 	*tmp;
	int		i;
	int 	len;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '.' || str[i] == '#' || str[i] == '\n')
			len++;
		i++;
	}
	tmp = malloc(sizeof(char*) * (len + 1));
	if (tmp == NULL)
		return (NULL);
	return (tmp);
}

static int 	str_len(char *str)
{
	int		i;
	int		j;
	int 	len;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '.' || str[i] == '#' || str[i] == '\n')
			len++;
		i++;
	}
	i = 0;
	j = len;
	while (str[i] == '\n')
	{
		len--;
		i++;
	}
	j--;
	while (str[j - 1] == '\n')
	{
		len--;
		j--;
	}
	return (len);
}

static char 	*str_malloc_2(char *str, int len)
{
	int i;
	int j;
	char *tmp;

	i = 0;
	j = 0;
	tmp = malloc(sizeof(char*) * (len + 1));
	if (tmp == NULL)
		return (NULL);
	while (str[i] == '\n')
		i++;
	while (j < len)
	{
		tmp[j] = str[i];
		i++;
		j++;
	}
	tmp[j] = '\0';
	return (tmp);
}

char	*ft_strcleaner(char *str, int n)
{
	char	*tmp;
	int 	i;
	int 	j;
	int		len;

	j = 0;
	i = 0;
	if (*str == '\0')
		return (str);
	tmp = replace_void(str);
	tmp = str_malloc_1(tmp);
	while (i < n)
	{
		if (str[i] == '.' || str[i] == '#' || str[i] == '\n')
		{
			tmp[j] = str[i];
			j++;
		}
		i++;
	}
	len = str_len(tmp);	
	tmp = str_malloc_2(tmp, len);
	return (ft_strcat(tmp, ft_strcleaner(str + 21, n)));
}
