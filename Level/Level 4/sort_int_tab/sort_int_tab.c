/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:06:11 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/14 19:25:00 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

void	sort_int_tab(int *tab, unsigned int size)
{
	int	idx;
	int	bubble;

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
