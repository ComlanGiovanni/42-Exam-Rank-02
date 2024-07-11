/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 21:34:02 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 20:11:48 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check_ascii_tab(int *ascii_tab, char c)
{
	if (ascii_tab[(int)c] == 1)
	{
		ft_putchar(c);
		ascii_tab[(int)c] = 0;
	}
}

void	ft_union(char *str_1, char *str_2)
{
	int	idx;
	int	ascii_tab[256];

	idx = 0;
	while (idx <= 256)
	{
		ascii_tab[idx] = 1;
		idx++;
	}
	idx = 0;
	while (str_1[idx] != '\0')
	{
		check_ascii_tab(ascii_tab, str_1[idx]);
		idx++;
	}
	idx = 0;
	while (str_2[idx] != '\0')
	{
		check_ascii_tab(ascii_tab, str_2[idx]);
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
