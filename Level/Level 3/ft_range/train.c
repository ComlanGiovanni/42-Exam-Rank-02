/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 02:54:14 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 10:56:02 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int	ft_absolute_value(int number)
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
	size = ft_absolute_value(end - start) + 1;
	while (idx < size)
	{
		printf(" [%i] ", tab[idx]);
		idx++;
	}
	printf("\n");
}
*/
