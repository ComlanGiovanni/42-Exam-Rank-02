/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:41:00 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 16:53:23 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check_doublon(int *ascii_tab, char c_str_2)
{
	if (ascii_tab[(int)c_str_2] == 0)
	{
		ft_putchar(c_str_2);
		ascii_tab[(int)c_str_2] = 1;
	}
}

void	ft_union(char *str_1, char *str_2)
{
	int	idx;
	int	ascii_tab[256];

	idx = 0;
	while (idx <= 256)
	{
		ascii_tab[idx] = 0;
		idx++;
	}
	idx = 0;
	while (str_1[idx] != '\0')
	{
		check_doublon(ascii_tab, str_1[idx]);
		idx++;
	}
	idx = 0;
	while (str_2[idx] != '\0')
	{
		check_doublon(ascii_tab, str_2[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}

/*
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
}*/

/*
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
*/
