/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_island.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:08:29 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/11 19:12:08 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int			get_size(char *s, int *fd, int *size)
{
	char	buf[1024];
	int		l_nl[2] = {0, 0};
	int		ret;
	int		i;

	if (!s || (*fd = open(s, O_RDONLY)) < 0)
		return (0);
	while ((ret = read(*fd, buf, 1024)))
	{
		i = -1;
		while (++i < ret)
		{
			if (buf[i] == '\n')
			{
				if ((l_nl[0] != 0 && (i - l_nl[1]) % l_nl[0] != 0) || i > 1024)
					return (0);
				l_nl[0] = l_nl[0] ? i / (l_nl[1] + 1) : i;
				l_nl[1]++;
			}
		}
		*size += ret;
	}
	close(*fd);
	return (l_nl[0]);
}

void		find_island(char *map, int index, int s_sl[2], char *nbr)
{
	if (index > s_sl[0])
		return ;
	if (map[index] == 'X')
	{
		map[index] = *nbr;
		find_island(map, index + 1, s_sl, nbr);
		find_island(map, index + s_sl[1] + 1, s_sl, nbr);
		find_island(map, index - 1, s_sl, nbr);
		find_island(map, index - s_sl[1] - 1, s_sl, nbr);
	}
}

void		print_island(char *map, int size_line, int size)
{
	int		s_sl[2];
	int		i;
	char	nbr;

	nbr = '0';
	i = -1;
	s_sl[0] = size;
	s_sl[1] = size_line;
	while (++i < size)
	{
		if (map[i] == 'X')
		{
			find_island(map, i, s_sl, &nbr);
			nbr = nbr + 1;
		}
	}
	i = -1;
	write(1, map, size);
	if (map)
		free(map);
}

int			count_island(char *s)
{
	char	*map;
	int		size;
	int		fd;
	int		size_line;

	size = 0;
	if ((size_line = get_size(s, &fd, &size)) == 0)
		return (0);
	if (!size)
		return (0);
	if ((fd = open(s, O_RDONLY)) < 0)
		return (0);
	if (!(map = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	map[size] = '\0';
	if ((read(fd, map, size)) < 0)
		return (0);
	print_island(map, size_line, size);
	close(fd);
	return (1);
}

int			main(int argc, char ** argv)
{
	if (argc == 2)
	{
		if (count_island(argv[1]) == 0)
			write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
		return (0);
}
*/


/*
#include <unistd.h>
#include <fcntl.h>

int			read_map(int fd, int *nb_line, int *size)
{
	int		size_line;
	int		verif;
	int		rd;
	char	buff[1];

	size_line = 0;
	verif = 0;
	while ((rd = read(fd, buff, 1)))
	{
		if (*buff && *buff != '\n' && *buff != 'X' && *buff != '.')
			return (0);
		if (*buff && *buff == '\n')
		{
			if (size_line > 1024)
				return (0);
			if (!verif)
				verif = size_line;
			if (verif != size_line)
				return (0);
			*nb_line = *nb_line + 1;
			size_line = 0;
		}
		else
			size_line++;
	}
	*size = verif;
	return (1);
}

void		define_num(char *buff, int i, int size, int size_line, int num)
{
	if (i < size && buff[i] == 'X')
	{
		buff[i] = num + '0';
		define_num(buff, i + 1, size, size_line, num);
		define_num(buff, i - 1, size, size_line, num);
		define_num(buff, i + size_line, size, size_line, num);
		define_num(buff, i - size_line, size, size_line, num);
	}
}

void		draw_map(int fd, int nb_line, int size_line)
{
	char	buff[nb_line * size_line + nb_line];
	int		i;
	int		size;
	int		num;

	size = nb_line * size_line + nb_line;
	i = -1;
	num = 0;
	read(fd, buff, size);
	while (++i < size)
	{
		if (buff[i] == 'X')
		{
			define_num(buff, i, size, size_line + 1, num);
			num++;
		}
	}
	write(1, buff, size);
}

int			count_island(char *path)
{
	int		fd;
	int		nb_line;
	int		size_line;

	nb_line = 0;
	size_line = 0;
	if (!(fd = open(path, O_RDONLY)))
		return (0);
	if (!read_map(fd, &nb_line, &size_line))
		return (0);
	if (!(fd = open(path, O_RDONLY)))
		return (0);
	draw_map(fd, nb_line, size_line);
	return (1);
}

int			main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (!count_island(argv[1]))
			write(1, "ERROR\n", 6);
	}
	return (0);
}
*/
