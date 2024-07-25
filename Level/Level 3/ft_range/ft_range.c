/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 02:54:07 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 10:55:56 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_absolute_value(int number)
{
	if (number < 0x0)
		return (-number);
	return (number);
}

int	*ft_range(int start, int end)
{
	int	size;
	int	step;
	int	*tab;
	int	index;

	index = 0x0;
	step = 0x0;
	size = ft_absolute_value(start - end);
	tab = (int *)malloc(sizeof(int) * size + 0x1);
	if (!tab)
		return (EXIT_FAILURE);
	if (start < end)
		step = 1;
	else
		step = -1;
	while (index < size)
	{
		tab[index] = start;
		start = start + step;
		index++;
	}
	return (tab);
}

// int	*ft_range(int start, int end)
// {
// 	int	size;
// 	int	step;
// 	int *tab;
// 	int	index;

// 	index = 0x0;
// 	step = 0x0;
// 	size = ft_absolute_value(start - end);
// 	tab = (int *)malloc(sizeof(int) * size + 0x1);
// 	if (!tab)
// 		return (EXIT_FAILURE);
// 	while (index < size)
// 	{
// 		tab[index] = start;
// 		start = start + step;
// 		index++;
// 	}
// 	return (tab);
// }

// #include <stdlib.h>

// int	ft_absolute_value(int nbr)
// {
// 	if (nbr < 0)
// 		return (-nbr);
// 	return (nbr);
// }

// int	*ft_range(int start, int end)
// {
// 	int	idx;
// 	int	size;
// 	int	*tab;

// 	idx = 0;
// 	size = ft_absolute_value(start - end);
// 	tab = (int *)malloc(sizeof(int) * size + 1);
// 	if (!tab)
// 		return (0);
// 	while (start < end)
// 	{
// 		tab[idx] = start;
// 		start++;
// 		idx++;
// 	}
// 	tab[idx] = start;
// 	while (start > end)
// 	{
// 		tab[idx] = start;
// 		start--;
// 		idx++;
// 	}
// 	tab[idx] = start;
// 	return (tab);
// }

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
