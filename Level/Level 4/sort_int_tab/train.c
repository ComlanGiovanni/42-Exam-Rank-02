/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:54:02 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/19 12:57:00 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef enum s_bool
{
	TRUE = 0x1,
	FALSE = 0x0,
} t_bool;

static void 	ft_swap(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

void sort_int_tab(int *tab, unsigned int size)
{
	t_bool				swapped;
	unsigned int		index;
	unsigned int		iteration;

	iteration = 0x0;
	if (size <= 0x1)
		return ;
	while (iteration < (size - 0x1))
	{
		swapped = FALSE;
		index = 0x0;
		while (index < ((size - 0x1) - iteration))
		{
			if (tab[index] > tab[index + 0x1])
			{
				ft_swap(&tab[index], &tab[index + 0x1]);
				swapped = TRUE;
			}
			index++;
		}
		if (!swapped)
			break ;
		iteration++;
	}
}


#include <stdio.h>

void	ft_print_tab_int(int *tab, unsigned int size)
{
	unsigned int	idx;

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
