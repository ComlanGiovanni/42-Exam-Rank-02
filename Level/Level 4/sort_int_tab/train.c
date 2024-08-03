/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:54:02 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 12:09:25 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_swap(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	idx;
	unsigned int	bubble;

	idx = 0;
	bubble = 0;
	if (size <= 1)
		return ;
	while (bubble < size)
	{
		idx = 0;
		while (idx < (size - 1))
		{
			if (tab[idx] > tab[idx + 1])
				ft_swap(&tab[idx], &tab[idx + 1]);
			idx++;
		}
		bubble++;
	}
}

#include <stdio.h>

void	ft_print_tab_int(int *tab, unsigned int size)
{
	unsigned int		idx;

	idx = 0;
	while (idx < size)
	{
		printf(" [%d] ", tab[idx]);
		idx++;
	}
}

int	main(void)
{
	int				tab[10];
	unsigned int	size;

	tab[0] = 9;
	tab[1] = 1;
	tab[2] = 7;
	tab[3] = 4;
	tab[4] = 8;
	tab[5] = 9;
	tab[6] = 2;
	tab[7] = 4;
	tab[8] = 5;
	tab[9] = 0;
	size = 10;
	ft_print_tab_int(tab, size);
	sort_int_tab(tab, size);
	printf("\n");
	ft_print_tab_int(tab, size);
	printf("\n");
	return (0);
}

