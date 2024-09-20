#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	half_str(char *str)
{
	int		idx;

	idx = 0;
	while (str[idx])
	{
		if (!(idx % 2))
			ft_putchar(str[idx]); //write(1, &str[idx], 1);
		idx++;
	}
}

int		main(int argc, char **argv)
{
	int	idx;

	idx = 1;
	if (argc != 2)
	{
		while (idx < argc)
		{
			half_str(argv[idx]);
			idx++;
		}
	}
	ft_putchar('\n');
	return (0);
}
