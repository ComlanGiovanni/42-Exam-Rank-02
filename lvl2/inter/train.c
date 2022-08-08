/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:44:39 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/08 23:29:31 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check_doublon(int *tab, char c)
{
	if (tab[(int)c] == 1)
	{
		ft_putchar(c);
		tab[(int)c] = 0;
	}
}

void	inter(char *s1, char *s2)
{
	int	idx;
	int	tab[256];

	idx = 0;
	while (idx <= 256)
	{
		tab[idx] = 0;
		idx++;
	}
	idx = 0;
	while (s2[idx] != '\0')
	{
		tab[(int)s2[idx]] = 1;
		idx++;
	}
	idx = 0;
	while (s1[idx] != '\0')
	{
		check_doublon(tab, s1[idx]);
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
