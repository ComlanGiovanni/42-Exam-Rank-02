/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 21:34:02 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/06 21:34:35 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check_tab(char c, int *tab)
{
	int	nbr;

	nbr = c;
	if (tab[nbr] == 0)
	{
		tab[nbr] = 1;
		ft_putchar(c);
	}
}

void	ft_union(char *s1, char *s2)
{
	int	idx;
	int tab[256] = {0};

	idx = 0;
	while (s1[idx] != '\0')
	{
		check_tab(s1[idx], tab);
		idx++;
	}
	idx = 0;
	while (s2[idx] != '\0')
	{
		check_tab(s2[idx], tab);
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
