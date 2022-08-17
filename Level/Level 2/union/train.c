/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 21:34:02 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 16:53:23 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check_tab(int *ascii_tab, char c_str)
{
	if (ascii_tab[(int)c_str] == 0)
	{
		ascii_tab[(int)c_str] = 1;
		ft_putchar(c_str);
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
		check_tab(ascii_tab, str_1[idx]);
		idx++;
	}
	idx = 0;
	while (str_2[idx] != '\0')
	{
		check_tab(ascii_tab, str_2[idx]);
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
#include <unistd.h> // For write

int		not_seen_before(char *s, int max_pos, char c)
{
	int	i;

	i = -1;
	while(++i < max_pos)
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
*/
