/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 00:45:54 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 13:41:42 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdlib.h> //EXIT_SUCCESS STDOUT_FILENO

static void	ft_putchar_fd(char character, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static int	ft_isspace(char character)
{
	return ((character == ' ') || ((character >= '\t') && (character <= '\r')));
}

static void	ft_first_word(char *string)
{
	while (ft_isspace(*string))
		string++;
	while (*string && !ft_isspace(*string))
		ft_putchar_fd(*string++, STDOUT_FILENO);
}

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_first_word(argv[0x1]);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

// #include <unistd.h> // For write && STDOUT_FILENO

// void	ft_putchar(char c)
// {
// 	write(STDOUT_FILENO, &c, 1);
// }

// void	first_word(char *str)
// {
// 	int	idx;

// 	idx = 0;
// 	while (str[idx] == ' ' || str[idx] == '\t')
// 		idx++;
// 	while (str[idx] != '\0' && (str[idx] != ' ' && str[idx] != '\t'))
// 	{
// 		ft_putchar(str[idx]);
// 		idx++;
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		first_word(argv[1]);
// 	ft_putchar('\n');
// 	return (0);
// }

/*		Other short or long way to do

// ||

#include <unistd.h>

void	first_word(char *str)
{
	while ((*str == ' ') || (*str == '\t'))
		str++;
	while (*str && !(*str == ' ') || (*str == '\t'))
		ft_putchar(str++);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	write(1, "\n", 1);
	return (0x0);
}
//  ||

#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_space(char c)
{
	if ((c == ' ') || (c == '\t'))
		return (1);
	return (0);
}

void	first_word(char *str)
{
	int	idx;

	idx = 0;
	while (is_space(str[idx]))
		idx++;
	while ((str[idx] != ' ' && str[idx] != '\t') && str[idx] != '\0')
		ft_putchar(str[idx++]);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	ft_putchar('\n');
	return (0);
}

// ||

#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1] && (*av[1] == ' ' || *av[1] == '\t' || *av[1] == '\n'
				|| *av[1] == '\r' || *av[1] == '\v' || *av[1] == '\f'))
			++av[1];
		while (*av[1] != '\0' && (*av[1] != ' ' && *av[1] != '\t'
				&& *av[1] != '\n' && *av[1] != '\r' && *av[1] != '\v'
				&& *av[1] != '\f'))
			write(1, av[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}


// ||

#include <unistd.h>

int	ft_isspace(int i)
{
	if (i == '\t' || i == '\n' || i == '\r'
		|| i == '\v' || i == '\f' || i == ' ')
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (ft_isspace((argv[1][i])))
			i += 1;
		while (!(ft_isspace(argv[1][i])) && argv[1][i])
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}

// ||

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	idx;

	idx = 0;
	if (argc == 2)
	{
		while (argv[1][idx] == 32 || argv[1][idx] == 9)
			idx++;
		while ((argv[1][idx] != 32 && argv[1][idx] != 9) && argv[1][idx])
		{
			write(1, &argv[1][idx], 1);
			idx++;
		}
	}
	write(1, "\n", 1);
}

// ||

#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1] && (*av[1] == ' ' || *av[1] == '\t'))
			++av[1];
		while (*av[1] != '\0' && (*av[1] != ' ' && *av[1] != '\t'))
			write(1, av[1]++, 1);
	}
	ft_putchar('\n');
	return (0);
}

// ||

#include <unistd.h>

int	ft_isspace(char i)
{
	if (i == '\t' || i == '\n' || i == '\v' || i == '\f' || i == ' ')
		return (1);
	return (0);
}

void	ft_first_word(char *str)
{
	while (ft_isspace(*str))
		str++;
	while (*str && !(ft_isspace(*str)))
		write(1, str++, 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_first_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}

// ||

#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first_word(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] == ' ' || str[idx] == '\t')
		idx++;
	while ((str[idx] != ' ' && str[idx] != '\t') && str[idx] != '\0')
		ft_putchar(str[idx++]);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	ft_putchar('\n');
	return (0);
}

// ||

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	idx;

	idx = 0;
	if (argc == 2)
	{
		while (argv[1][idx] == ' ' || argv[1][idx] == '\t')
			idx++;
		while (argv[1][idx] != '\0'
			&& argv[1][idx] != ' ' && argv[1][idx] != '\t')
		{
			write(1, &argv[1][idx], 1);
			idx++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


*/
