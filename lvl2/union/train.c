/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 21:34:02 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/08 22:38:24 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check_tab(int *tab, char c)
{
	if (tab[(int)c] == 0)
	{
		tab[(int)c] = 1;
		ft_putchar(c);
	}
}

void	ft_union(char *s1, char *s2)
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
	while (s1[idx] != '\0')
	{
		check_tab(tab, s1[idx]);
		idx++;
	}
	idx = 0;
	while (s2[idx] != '\0')
	{
		check_tab(tab, s2[idx]);
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
