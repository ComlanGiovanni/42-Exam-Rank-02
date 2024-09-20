/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:10:00 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/19 12:32:38 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_swap(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	index;
	unsigned int	bubble;

	bubble = 0x0;
	if (size <= 0x1)
		return ;
	while (bubble < size)
	{
		index = 0x0;
		while (index < (size - 1))
		{
			if (tab[index] > tab[index + 0x1])
				ft_swap(&tab[index], &tab[index + 1]);
			index++;
		}
		bubble++;
	}
}

/*
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
}*/
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
}
*/
