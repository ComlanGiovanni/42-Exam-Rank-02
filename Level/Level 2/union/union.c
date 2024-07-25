/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:24:49 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 11:03:30 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write

static void	ft_union(char *str_1, char *str_2);
static void	ft_fill_ascii(int *ascii_tab, int length);
static void	ft_print_seen_character(int *ascii, char *str);
static void	ft_putchar_fd(char character,	int file_descriptor);

int	main(int argc, char **argv)
{
	if (argc == 0x3)
		ft_union(argv[0x1], argv[0x2]);
	ft_putchar_fd('\n', STDOUT_FILENO);
}

static void	ft_union(char *str_1, char *str_2)
{
	int		ascii[256];

	ft_fill_ascii(ascii, 256);
	ft_print_seen_character(ascii, str_1);
	ft_print_seen_character(ascii, str_2);
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

static void	ft_print_seen_character(int *ascii, char *str)
{
	while (*str)
	{
		if (ascii[(int)*str] == 0x0)
		{
			ft_putchar_fd(str, STDOUT_FILENO);
			ascii[(int)*str] = 0x1;
		}
		str++;
	}
}

static void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

// #include <unistd.h> // For write

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	check_ascii_tab(int *ascii_tab, char c_str_2)
// {
// 	if (ascii_tab[(int)c_str_2] == 0)
// 	{
// 		ft_putchar(c_str_2);
// 		ascii_tab[(int)c_str_2] = 1;
// 	}
// }

// void	ft_union(char *str_1, char *str_2)
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
// 	while (str_1[idx] != '\0')
// 	{
// 		check_ascii_tab(ascii_tab, str_1[idx]);
// 		idx++;
// 	}
// 	idx = 0;
// 	while (str_2[idx] != '\0')
// 	{
// 		check_ascii_tab(ascii_tab, str_2[idx]);
// 		idx++;
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	if (argc == 3)
// 		ft_union(argv[1], argv[2]);
// 	ft_putchar('\n');
// 	return (0);
// }

/*			Other short or long way to do

#include <unistd.h> // For write

int		check_doubles2(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		check_doubles1(char *str, char c, int pos)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			if (check_doubles1(av[1], av[1][i], i))
				write(1, &av[1][i], 1);
			i++;
		}
		i = 0;
		while (av[2][i] != '\0')
		{
			if (check_doubles2(av[1], av[2][i]))
			{
				if (check_doubles1(av[2], av[2][i], i))
					write(1, &av[2][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// ||

#include <unistd.h> // For write

void	print_union(char *a, char *b)
{
	int characters[128] = { 0 };
	int c;

	while (*a != '\0')
	{
		c = *a;
		if (characters[c] == 0)
		{
			write(1, a, 1);
			characters[c] = 1;
		}
		++a;
	}

	while (*b != '\0')
	{
		c = *b;
		if (characters[c] == 0)
		{
			write(1, b, 1);
			characters[c] = 1;
		}
		++b;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		print_union(argv[1], argv[2]);

	write(1, "\n", 1);
	return (0);
}

// ||

#include <unistd.h> // For write

int not_seen_before(char *s, int max_pos, char c)
{
	int	i;

	i = -1;
	while (++i < max_pos)
		if (s[i] == c)
			return (0);
	return (1);
}

void ft_union(char *s1, char *s2)
{
	int	i;
	int	j;

	i = -1;
	while (s1[++i])
		if (not_seen_before(s1, i, s1[i]))
			write(1, &s1[i], 1);
	j = -1;
	while (s2[++j])
		if (not_seen_before(s1, i, s2[j]) & not_seen_before(s2, j, s2[j]))
			write(1, &s2[j], 1);
}

int main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}

// ||

instead of looping in tab to pu 0 we can also ?

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			idx;
	unsigned char	*s;

	if (!b)
		return (NULL);
	idx = 0;
	s = (unsigned char *)b;
	while (idx < len)
	{
		s[idx] = c;
		idx++;
	}
	return (s);
}


// ||

#include <unistd.h>

int	not_seen_before(char *s, int max_pos, char c)
{
	int	i;

	i = -1;
	while (++i < max_pos)
		if (s[i] == c)
			return (0);
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	i;
	int	j;

	i = -1;
	while (s1[++i])
		if (not_seen_before(s1, i, s1[i]))
			write(1, &s1[i], 1);
	j = -1;
	while (s2[++j])
		if (not_seen_before(s1, i, s2[j]) & not_seen_before(s2, j, s2[j]))
			write(1, &s2[j], 1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
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
	while (*s1)
	{
		if (hash[(int)*s1] == 0)
		{
			putchar(*s1);
			hash[(int)*s1]++;
		}
		s1++;
	}
	while (*s2)
	{
		if (hash[(int)*s2] == 0)
		{
			putchar(*s2);
			hash[(int)*s2]++;
		}
		s2++;
	}
	putchar('\n');
}

*/
