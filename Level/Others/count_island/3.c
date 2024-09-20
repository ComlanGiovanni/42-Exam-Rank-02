#include "count_island.h"

int		ft_strlen(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		;
	return (i);
}

char	*ft_strjoin(char *line, char *buf)
{
	char	*new;
	int		len;
	int		i;
	int		j;

	len = 0;
	if (line)
		len += ft_strlen(line);
	len += ft_strlen(buf);
	new = malloc(len + 1);
	new[len] = 0;
	/* starting from i = 0 because if !line, we will skip to adding buf contents to new */
	i = 0;
	if (line)
	{
		while (line[i])
		{
			new[i] = line[i];
			i++;
		}
	}
	j = -1;
	while (buf[++j])
	{
		new[i] = buf[j];
		i++;
	}
	if (line)
		free(line);
	return (new);
}

int		validate(char *line, int *line_len, int *line_count)
{
	int	i;
	int	check_len;

	i = -1;
	check_len = 0;
	while (line[++i])
	{
		if (line[i] == '.' || line[i] == 'X')
			check_len++;
		else if (line[i] == '\n')
		{
			/* upon encountering first '\n', save line length */
			if (!*line_len)
				*line_len = i;
			/* for other lines compare their lengths to first line's */
			else if (check_len != *line_len)
				return (0);
			check_len = 0;
			*line_count += 1;
		}
	}
	/* check last line validity */
	if (check_len)
		return (0);
	return (1);
}

void	flood_fill(char *line, int y, int x, int wd, int ht, char num)
{
	line[y * wd + x] = num;
	if (y > 0 && line[(y - 1) * wd + x] == 'X')
		flood_fill(line, y - 1, x, wd, ht, num);
	/* for wd = 6 values of x are 0 to 5, but x = 5 is '\n,'
	 * so to go right x must be at most 3 */
	if (x < wd - 2 && line[y * wd + x + 1] == 'X')
		flood_fill(line, y, x + 1, wd, ht, num);
	/* for ht = 6 values of y are 0 to 5,
	 * so to go down y must be at most 4 */
	if (y < ht - 1 && line[(y + 1) * wd + x] == 'X')
		flood_fill(line, y + 1, x, wd, ht, num);
	if (x > 0 && line[y * wd + x - 1] == 'X')
		flood_fill(line, y, x - 1, wd, ht, num);
}

void	find_islands(char *line, int wd, int ht)
{
	int	x;
	int	y;
	char	isl_num;

	/* increment wd to account for '\n' (this will make the {y * wd} valid);
	 * however, we will have to discount for '\n' in flood fill*/
	wd++;
	isl_num = '0';
	y = -1;
	while (++y < ht)
	{
		x = -1;
		while (++x < wd)
		{
			if (line[y * wd + x] == 'X')
			{
				flood_fill(line, y, x, wd, ht, isl_num);
				isl_num++;
			}
		}
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];
	int		line_len;
	int		line_count;
	char	*line;
	int		i;

	if (argc == 2)
	{
		i = -1;
		while (++i < BUF_SIZE)
			buf[i] = 0;
		line = NULL;
		line_count = 0;
		line_len = 0;
		if ((fd = open(argv[1], O_RDONLY)) == -1)
		{
			write(1, "\n", 1);
			return (1);
		}
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			/* if ret < BUF_SIZE, this will cut buf */
			buf[ret] = 0;
			line = ft_strjoin(line, buf);
		}
		if (!validate(line, &line_len, &line_count))
		{
			write(1, "\n", 1);
			return (1);
		}
		find_islands(line, line_len, line_count);
		i = ft_strlen(line);
		write(1, line, i);
	}
	else
		write(1, "\n", 1);
}