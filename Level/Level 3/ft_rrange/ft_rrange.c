/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 02:54:22 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 02:54:24 by gicomlan         ###   ########.fr       */
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
	if (start > end)
		return (ft_rrange(end, start));
	size = ft_absolute_value(start - end);
	tab = (int *)malloc(sizeof(int) * size + 1);
	if (!tab)
		return (0);
	while (idx < start)
	{
		tab[idx] = start;
		start++;
		idx++;
	}
	return (tab);
}

/*
you can also do the same logic as ft_range

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
	tab = ft_rrange(start, end);
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

int *ft_rrange(int start, int end)
{
	int *r;
	int len;

	len = (end >= start) ? end - start + 1 : start - end + 1;
	if (!(r = (int*) malloc(sizeof(int) * len)))
		return (NULL);
	while (len--)
		r[len] = (end >= start) ? start++ : start--;
	return (r);
}

#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *range;
	int i;
	int n;

	i = 0;
	if (start > end)
		return (ft_rrange(end, start));
	n = end - start + 1;
	range = (int *)malloc(sizeof(int) * n);
	if (range)
	{
		while (i < n)
		{
			range[i] = start;
			start++;
			i++;
		}
	}
	return (range);
}
*/
