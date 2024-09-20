/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:28:05 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 14:56:18 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdlib.h> //EXIT_SUCCESS STDOUT_FILENO

static int	ft_isupper(char character)
{
	return ((character >= 'A') && (character <= 'Z'));
}

static int	ft_isalpha(char character)
{
	return (ft_isupper(character) \
		|| ((character >= 'a') && (character <= 'z')));
}

static void	ft_repeat(char alphabet, int repeat_count, int file_descriptor)
{
	while (repeat_count-- >= 0x0)
		write (file_descriptor, &alphabet, sizeof(char));
}

static void	ft_repeat_alpha(char *str)
{
	while (*str)
	{
		if (ft_isalpha(*str))
		{
			if (ft_isupper(*str))
				ft_repeat(*str, (*str - 'A'), STDOUT_FILENO);
			else
				ft_repeat(*str, (*str - 'a'), STDOUT_FILENO);
		}
		else
			write (STDOUT_FILENO, str, sizeof(char));
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_repeat_alpha(argv[0x1]);
	write(STDOUT_FILENO, "\n", sizeof(char));
	return (EXIT_SUCCESS);
}

/*		Other short or long way to do

#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat(char c, int pos)
{
	while (pos >= 0)
	{
		ft_putchar(c);
		pos--;
	}
}

void	repeat_alpha(char *str)
{
	int	idx;
	int	pos;

	idx = 0;
	pos = 0;
	while (str[idx] != '\0')
	{
		if ((str[idx] >= 'A') && (str[idx] <= 'Z'))
		{
			pos = (str[idx] - 'A');
			repeat(str[idx], pos);
		}
		else if ((str[idx] >= 'A') && (str[idx] <= 'z'))
		{
			pos = (str[idx] - 'a');
			repeat(str[idx], pos);
		}
		else
			ft_putchar(str[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	ft_putchar('\n');
	return (0);
}

// ||

#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	index;
	int	alpha_index;

	index = 0;
	alpha_index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			alpha_index = str[index] - 'A';
			while (alpha_index-- >= 0)
				write(1, &str[index], 1);
		}
		else if (str[index] >= 'a' && str[index] <= 'z')
		{
			alpha_index = str[index] - 'a';
			while (alpha_index-- >= 0)
				write(1, &str[index], 1);
		}
		else
			write(1, &str[index], 1);
		index++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, &"\n", 1);
	return (0);
}

// ||

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				for (int k = 0; k< argv[1][i]-96; k++)
					write (1, &argv[1][i], 1);
			}
			else if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				for (int j = 0; j< argv[1][i] - 64; j++)
					write (1, &argv[1][i], 1);
			}
			else
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

// ||

#include <unistd.h>

int	letter_count(char c)
{
	int	repeat;

	if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int	main(int ac, char **av)
{
	int	repeat;

	if (ac == 2)
	{
		while (*av[1])
		{
			repeat = letter_count(*av[1]);
			while (repeat--)
				write(1, av[1], 1);
			av[1]++;
		}
	}
	ft_putchar('\n');
}

// ||

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	letter;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			letter = 0;
			if (argv[1][i] >= 'A' && 'Z' >= argv[1][i])
				letter = argv[1][i] - 63;
			else if (argv[1][i] >= 'a' && 'z' >= argv[1][i])
			{
				letter = argv[1][i] - 95;
				while (--letter)
					write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// ||

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	repeat_alpha(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			c = str[i] - 95;
			while (--c)
				ft_putchar(str[i]);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			c = str[i] - 63;
			while (--c)
				ft_putchar(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}

// ||

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	repeat_alpha(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			c = str[i] - 95;
			while (--c)
				ft_putchar(str[i]);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			c = str[i] - 63;
			while (--c)
				ft_putchar(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}

// ||

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				count = av[1][i] - 64;
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				count = av[1][i] - 96;
			while (count)
			{
				write(1, &av[1][i], 1);
				count--;
			}
			count = 1;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

*/
