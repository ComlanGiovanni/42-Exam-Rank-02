/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:36:37 by gcomlan           #+#    #+#             */
/*   Updated: 2024/07/24 08:45:27 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static void	ft_inter(char *str_1, char *str_2);
static void	ft_mark_char_in_ascii_tab(int *ascii, char *str);
static void	ft_print_common_characters(int *ascii, char *str);
static void	ft_fill_ascii(int *ascii_tab, int length);

int	main(int argc, char **argv)
{
	if (argc == 0x3)
		ft_inter(argv[0x1], argv[0x2]);
	write(STDOUT_FILENO, "\n", sizeof(char));
	return (EXIT_SUCCESS);
}

static void	ft_inter(char *str_1, char *str_2)
{
	int		ascii[256];

	ft_fill_ascii(ascii, 256);
	ft_mark_char_in_ascii_tab(ascii, str_2);
	ft_print_common_characters(ascii, str_1);
}

static void	ft_fill_ascii(int *ascii_tab, int length)
{
	int		index;

	index = 0x0;
	while (index <= length)
	{
		ascii_tab[index] = 0x0;
		index++;
	}
}

static void	ft_mark_char_in_ascii_tab(int *ascii, char *str)
{
	while (*str)
	{
		if (ascii[(int)*str] == 0x0)
			ascii[(int)*str] = 0x1;
		str++;
	}
}

static void	ft_print_common_characters(int *ascii, char *str)
{
	while (*str)
	{
		if (ascii[(int)*str] == 0x1)
		{
			write(STDOUT_FILENO, str, sizeof(char));
			ascii[(int)*str] = 0x0;
		}
		str++;
	}
}

// #include <unistd.h> // For write

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	check_ascii_tab(int *ascii_tab, char c_str_1)
// {
// 	if (ascii_tab[(int)c_str_1] == 1)
// 	{
// 		ascii_tab[(int)c_str_1] = 0;
// 		ft_putchar(c_str_1);
// 	}
// }

// void	inter(char *str_1, char *str_2)
// {
// 	int	idx;
// 	int	ascii_tab[256];

// 	idx = 0;
// 	while (idx <= 256)
// 	{
// 		ascii_tab[idx] = 0;
// 		idx++;
// 	}
// 	idx = 0;
// 	while (str_2[idx] != '\0')
// 	{
// 		ascii_tab[(int)str_2[idx]] = 1;
// 		idx++;
// 	}
// 	idx = 0;
// 	while (str_1[idx] != '\0')
// 	{
// 		check_ascii_tab(ascii_tab, str_1[idx]);
// 		idx++;
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	if (argc == 3)
// 		inter(argv[1], argv[2]);
// 	ft_putchar('\n');
// 	return (0);
// }

/*		Other short or long way to do

#include <unistd.h>	// For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check_ascii_tab(int *tab, char c)
{
	if (tab[(int)c] == 1)
	{
		tab[(int)c] = 0;
		ft_putchar(c);
	}
}

void	inter(char *str_1, char *str_2)
{
	int	idx;
	int	tab[256];

	idx = 0;
	while (str_2[idx] != '\0')
	{
		tab[(int)str_2[idx]] = 1;
		idx++;
	}
	idx = 0;
	while (str_1[idx] != '\0')
	{
		check_ascii_tab(tab, str_1[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}

// ||

#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_doublon(char *str, char c, int pos)
{
	int	idx;

	idx = 0;
	while (idx < pos)
	{
		if (str[idx] == c)
			return (0);
		idx++;
	}
	return (1);
}

// ||

void	inter(char *first, char *second)
{
	int	first_idx;
	int	second_idx;

	first_idx = 0;
	while (first[first_idx] != '\0')
	{
		second_idx = 0;
		while (second[second_idx] != '\0')
		{
			if (first[first_idx] == second[second_idx])
			{
				if (check_doublon(first, first[first_idx], first_idx) == 1)
				{
					write(1, &first[first_idx], 1);
					break ;
				}
			}
			second_idx++;
		}
		first_idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}

// ||

#include <unistd.h>

int	iter(char *str, char c, int len)
{
	int	idx;

	idx = 0;
	while (str[idx] && (idx < len || len == -1))
		if (str[idx++] == c)
			return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	idx;

	if (argc == 3)
	{
		idx = 0;
		while (argv[1][idx])
		{
			if (!iter(argv[1], argv[1][idx], idx)
				&& iter(argv[2], argv[1][idx], -1))
				write(1, &argv[1][idx], 1);
			idx += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// ||

#include <unistd.h>

int	scan(char *str, char c, int nb)
{
	while (nb >= 0)
	{
		if (str[nb] == c)
			return (0);
		nb--;
	}
	return (1);
}

void	inter(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	while (str1[i])
	{
		j = 0;
		while (str2[j])
		{
			if (str1[i] == str2[j])
			{
				if (scan(str1, str1[i], i - 1))
					write(1, &str1[i], 1);
				break ;
			}
			j++;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

// ||

#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	char	hash[256] = {0};

	char	*s1 = av[1], *s2 = av[2];
	while (*s2)
	{
		hash[(int)*s2] = 1;
		s2++;
	}
	while (*s1)
	{
		if (hash[(int)*s1] == 1)
		{
			putchar(*s1);
			hash[(int)*s1] = 0;
		}
		s1++;
	}
	putchar('\n');
}

*/
