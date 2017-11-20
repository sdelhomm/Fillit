/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecott <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 09:12:50 by alecott           #+#    #+#             */
/*   Updated: 2017/11/20 16:38:14 by alecott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	ft_printusage(void)
{
	ft_putstr("usage: ./fillit file_path\n");
}

char		*ft_get_file_content(char *file_path)
{
	char	*str;
	int		fd;
	int		n;

	fd = open(file_path, O_RDONLY);
	if (fd == -1)
		return (0);
	str = (char*)ft_memalloc(sizeof(char));
	n = 0;
	while (read(fd, str, 1))
		n++;
	close(fd);
	str = (char*)ft_memalloc(sizeof(char) * (n + 1));
	fd = open(file_path, O_RDONLY);
	read(fd, str, n);
	close(fd);
	return (str);
}

static void	ft_norme(char **tab, size_t field_width)
{
	int		i;

	i = 0;
	while (tab[i] != NULL)
	{
		tab[i] = ft_strreplace(tab[i], '#', 'A' + i);
		i++;
	}
	ft_putstr(ft_algo(ft_create_string(field_width), tab, field_width));
}

int			main(int argc, char **argv)
{
	char	*str;
	char	**tab;
	size_t	field_width;

	if (argc != 2)
	{
		ft_printusage();
		return (0);
	}
	str = ft_get_file_content(argv[1]);
	if (!ft_isvalid(str))
	{
		ft_putstr("error\n");
		return (0);
	}
	field_width = ft_get_min_size(ft_count_tetris(str));
	str = ft_strcleaner(str, 21);
	tab = ft_strnsplit(str, '#', 4);
	ft_norme(tab, field_width);
	return (0);
}
