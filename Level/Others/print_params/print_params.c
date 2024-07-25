#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		ft_putchar(str[size]);
		size++;
	}
}

int	main(int argc, char *argv[])
{
	int	argc_count;

	argc_count = 1;
	while (argc_count < argc)
	{
		if (argv[argc_count])
			ft_putstr(argv[argc_count]);
		ft_putchar('\n');
		argc_count++;
	}
	return (0);
}
