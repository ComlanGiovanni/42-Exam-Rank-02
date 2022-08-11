/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:44:39 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/11 13:55:55 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_absolute_value(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int	*ft_rrange(int start, int end)
{
	int	idx;
	int	size;
	int	*tab;

	idx = 0;
	size = ft_absolute_value(start - end);
	tab = (int *)malloc(sizeof(int) * size + 1);
	if (!tab)
		return (0);
	while (start < end)
	{
		tab[idx] = start;
		start++;
		idx++;
	}
	tab[idx] = start;
	while (start > end)
	{
		tab[idx] = start;
		start--;
		idx++;
	}
	tab[idx] = start;
	return (tab);
}

#include <stdio.h>

int	main(void)
{
	int	*tab;
	int	idx;
	int	start;
	int	end;
	int	size;

	idx = 0;
	start = 3;
	end = 1;
	tab = ft_rrange(start, end);
	size = ft_absolute_value(end - start) + 1;
	while (idx < size)
	{
		printf(" [%i] ", tab[idx]);
		idx++;
	}
	printf("\n");
}

/*

#include <stdlib.h>

int     absolute_value(int n)
{
    if (n < 0)
        return (-n);
    return (n);
}

int     *ft_rrange(int start, int end)
{
    int number_of_ints;
    int *array;
    int step;
    int i;

    number_of_ints = 1 + absolute_value(end - start);
    array = malloc(sizeof(int) * number_of_ints);

    if (start > end)
        step = 1;
    else
        step = -1;

    i = 0;
    while (i < number_of_ints)
    {
        array[i] = end;
        end = end + step;
        ++i;
    }
    return (array);
}

*/
