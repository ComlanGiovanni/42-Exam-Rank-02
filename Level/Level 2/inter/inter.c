/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:36:37 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 16:53:23 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check_ascii_tab(int *ascii_tab, char c_str_1)
{
	if (ascii_tab[(int)c_str_1] == 1)
	{
		ascii_tab[(int)c_str_1] = 0;
		ft_putchar(c_str_1);
	}
}

void	inter(char *str_1, char *str_2)
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
	while (str_2[idx] != '\0')
	{
		ascii_tab[(int)str_2[idx]] = 1;
		idx++;
	}
	idx = 0;
	while (str_1[idx] != '\0')
	{
		check_ascii_tab(ascii_tab, str_1[idx]);
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

/*
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
*/
