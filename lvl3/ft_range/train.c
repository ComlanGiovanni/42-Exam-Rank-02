/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:44:39 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/10 19:50:03 by gcomlan          ###   ########.fr       */
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
	int	*tab;
	int	size;

	idx = 0;
	size = ft_abs(start - end);
	tab = (int *)malloc(sizeof(int) * size + 1);
	if (!tab)
		return (0);
	while (start <= end)
	{
		tab[idx] = start;
		start++;
		idx++;
	}
	while (start >= end)
	{
		tab[idx] = start;
		start--;
		idx++;
	}
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
