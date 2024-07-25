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
	if (argv[0] && argc >= 1)
	{
		ft_putstr(argv[0]);
	}
	ft_putchar('\n');
	return (0);
}
