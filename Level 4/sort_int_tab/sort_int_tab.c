/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:06:11 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/12 15:12:23 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
