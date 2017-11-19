/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psens <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:16:44 by psens             #+#    #+#             */
/*   Updated: 2017/11/17 13:30:57 by alecott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	ft_printusage(void)
{
	ft_putstr("Ce programme ne fonctionne pas comme ca imbecile..\n");
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
	str = (char*)ft_memalloc(sizeof(char) * n + 1);
	fd = open(file_path, O_RDONLY);
	read(fd, str, n);
	close(fd);
	return (str);
}

int			main(int argc, char **argv)
{
	char	*str;

	if (argc != 2)
	{
		ft_printusage();
		return (0);
	}
	str = ft_get_file_content(argv[1]);     //stocke le contenu du fichier en argument dans str
	if (!ft_isvalid(str))                   //verifie que str est str est valide
	{
		ft_putstr("error\n");
		return (0);
	}
	str = ft_str_cleaner(str);              //range et separe avec strsplit chaque tetriminimos
//retourner le str sorti par l'algo
	tab_width = ft_get_min_size(ft_count_tetris(str));
	return (0);
}
