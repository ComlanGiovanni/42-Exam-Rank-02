/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:41:00 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/10 20:10:37 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int	*ft_range(int start, int end)
{
	int	idx;
	int	size;
	int	*tab;

	idx = 0;
	size = ft_abs(start - end);
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

/*
#include <stdio.h>

int	main(void)
{
	int	*tab;
	int	idx;
	int	start;
	int	end;
	int	size;

	idx = 0;
	start = -5;
	end = 5;
	tab = ft_range(start, end);
	size = ft_abs(end - start) + 1;
	while (idx < size)
	{
		printf(" [%i] ", tab[idx]);
		idx++;
	}
	printf("\n");
}
*/
/*
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	n;
	int	*s;

	n = max >= min ? max - min : min - max;
	if (!(s= (int *)malloc(sizeof(int) * (n))))
		return (NULL);
	while (max != min)
		*s++ = max > min ? min++ : min--;
	*s = min;
	return (s - n);
}
*/

/*
#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int		*range;
	int		i;

	if (start > end)
		i = (start - end) + 1;
	else
		i = (end - start) + 1;
	range = (int *)malloc(sizeof(int) * i);
	while (i)
	{
		range[i--] = start;
		start -= (start > end) ? (-1) : (1);
	}
	range[i] = start;
	return (range);
}
*/
