/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecott <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:03:32 by alecott           #+#    #+#             */
/*   Updated: 2017/11/21 11:03:35 by alecott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		*ft_get_file_content(char *file_path)
{
	char	*str;
	int		fd;
	int		n;

	fd = open(file_path, O_RDONLY);
	if (fd == -1)
		return (0);
	str = (char*)malloc(sizeof(char));
	if (str == NULL)
		return (NULL);
	n = 0;
	while (read(fd, str, 1))
		n++;
	close(fd);
	free(str);
	str = (char*)ft_memalloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	fd = open(file_path, O_RDONLY);
	read(fd, str, n);
	close(fd);
	return (str);
}

int			main(int argc, char **argv)
{
	char	*str;
	char	**tab;
	size_t	field_width;
	int		i;

	if (argc != 2)
	{
		ft_putstr("usage: ./fillit file_path\n");
		return (0);
	}
	str = ft_get_file_content(argv[1]);
	if (!ft_isvalid(str))
	{
		ft_putstr("error\n");
		return (0);
	}
	field_width = ft_get_min_size(ft_count_tetris(str));
	str = ft_strcleaner(str);
	tab = ft_strsplit(str, ' ');
	i = -1;
	while (tab[++i] != NULL)
		tab[i] = ft_strreplace(tab[i], '#', 'A' + i);
	ft_putstr(ft_algo(ft_create_string(field_width), tab, field_width));
	free(tab);
	return (0);
}
