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