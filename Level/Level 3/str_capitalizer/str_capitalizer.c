/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 01:25:51 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 01:25:54 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static void	ft_str_capitalizer(char *str);
static int	ft_tolower(int c);
static int	ft_toupper(int c);
static int	ft_isspace(int c);

int	main(int argc, char **argv)
{
	int	index;

	if (argc < 0x2)
		write(STDOUT_FILENO, "\n", sizeof(char));
	else
	{
		index = 0x1;
		while (index < argc)
		{
			ft_str_capitalizer(argv[index]);
			write(STDOUT_FILENO, "\n", sizeof(char));
			index++;
		}
	}
	return (EXIT_SUCCESS);
}

static void	ft_str_capitalizer(char *str)
{
	int	capitalize_next;

	capitalize_next = 0x1;
	while (*str)
	{
		if (capitalize_next)
			*str = ft_toupper(*str);
		else if (!capitalize_next)
			*str = ft_tolower(*str);
		write(STDOUT_FILENO, str, sizeof(char));
		if (ft_isspace(*str))
			capitalize_next = 0x1;
		else
			capitalize_next = 0x0;
		str++;
	}
}

static int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c += ('a' - 'A');
	return (c);
}

static int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		c -= ('a' - 'A');
	return (c);
}

static int	ft_isspace(int c)
{
	return ((c == ' ') || ((c >= '\t') && (c <= '\r')));
}

// #include <unistd.h> // For write

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_str_capitalizer(char *str)
// {
// 	int	idx;

// 	idx = 1;
// 	if (str[0] >= 'a' && 'z' >= str[0])
// 		str[0] -= 32;
// 	ft_putchar(str[0]);
// 	while (str[idx] != '\0')
// 	{
// 		if (str[idx] >= 'A' && 'Z' >= str[idx])
// 			str[idx] += 32;
// 		if ((str[idx] >= 'a' && 'z' >= str[idx]) && (str[idx - 1] == ' '
// 				|| str[idx - 1] == '\t'))
// 			str[idx] -= 32;
// 		ft_putchar(str[idx]);
// 		idx++;
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	int	idx;

// 	if (argc < 2)
// 		ft_putchar('\n');
// 	else
// 	{
// 		idx = 1;
// 		while (idx < argc)
// 		{
// 			ft_str_capitalizer(argv[idx]);
// 			ft_putchar('\n');
// 			idx++;
// 		}
// 	}
// 	return (0);
// }

/*
#include <unistd.h> // For write

int		ft_to_lower(char c, char d, int i)
{
	if (c != ' ' && c != '\t' && i != -1)
	{
		if (d >= 'A' && d <= 'Z')
			return (1);
	}
	return (0);
}

int		ft_to_upper(char c, char d)
{
	if (c == ' ' || c == '\t')
	{
		if (d >= 'a' && d <= 'z')
			return (1);
	}
	return (0);
}

int		main(int ac, char **av)
{
	int i;
	int i2;

	i = 0;
	if (ac > 1)
	{
		while (i < ac)
		{
			i++;
			i2 = 0;
			while (av[i][i2] != '\0')
			{
				if (av[i][0] >= 'a' && av[i][0] <= 'z')
					av[i][0] -= 32;
				else if (ft_to_lower(av[i][i2 - 1], av[i][i2], i2 - 1))
					av[i][i2] += 32;
				else if (ft_to_upper(av[i][i2 - 1], av[i][i2]))
					av[i][i2] -= 32;
				write(1, &av[i][i2], 1);
				i2++;
			}
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
*/
