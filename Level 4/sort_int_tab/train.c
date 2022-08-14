/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:06:16 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/14 01:45:35 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	idx;
	int				tmp;

	idx = 0;
	while (idx < (size - 1))
	{
		if (tab[idx] > tab[idx + 1])
		{
			tmp = tab[idx];
			tab[idx] = tab[idx + 1];
			tab[idx + 1] = tmp;
			idx = -1;
		}
		idx++;
	}
}
/*
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab [i];
				tab[i] = tab [i + 1];
				tab [i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
*/

/*
void    ft_swap(int *a, int *b)
{
        int     tmp;

        tmp = *b;
        *b = *a;
        *a = tmp;
}

void    sort_int_tab(int *tab, unsigned int size)
{
        unsigned int    idx;
        int                             check;

        check = 1;
        while (check == 1)
        {
                idx = 0;
                check = 0;
                while (idx < size)
                {
                        if (tab[idx] > tab[idx + 1])
                        {
                                ft_swap(&tab[idx], &tab[idx  + 1]);
                                check = 1;
                        }
                        idx++;
                }
        }
}*/

#include <stdio.h>

void    ft_print_tab_int(int *tab, int size)
{
        int     idx;

        idx = 0;
        while (idx <= size)
        {
                printf(" [%d] ", tab[idx]);
                idx++;
        }
}

int     main(void)
{
        int     size;
        int     tab[10];

        tab[0] = 9;
        tab[1] = 1;
        tab[2] = 7;
        tab[3] = 4;
        tab[4] = 8;
        tab[5] = 0;
        tab[6] = 2;
        tab[7] = 4;
        tab[8] = 5;
        tab[9] = 9;
        size = 9;
        ft_print_tab_int(tab, size);
        sort_int_tab(tab, size);
        printf("\n");
        ft_print_tab_int(tab, size);
        printf("\n");
        return (0);
}

