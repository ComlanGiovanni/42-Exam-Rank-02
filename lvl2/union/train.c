/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 21:34:02 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/09 13:37:37 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
