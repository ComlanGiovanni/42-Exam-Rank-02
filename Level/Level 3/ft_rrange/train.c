/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 02:54:33 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 11:08:26 by gicomlan         ###   ########.fr       */
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
	if (start > end)
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
*/
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

/*
#include <stdlib.h>

int			ft_abs(int i)
{
	if (i < 0)
		return (-i);
	return (i);
}

int			*ft_range(int start, int end)
{
	int		*tab;
	int		i;

	i = 0;
	while ((start + i) <= end)
		i++;
	if (!(tab = (int *)malloc(sizeof(int) * i)))
		return (NULL);
	i = -1;
	while ((start  + ++i) <= end)
		tab[i] = start + i;
	return (tab);
}

int			*ft_rangei(int start, int end)
{
	int		*tab;
	int		i;

	i = 0;
	while ((start + i) <= end)
		i++;
	if (!(tab = (int *)malloc(sizeof(int) * i)))
		return (NULL);
	i = -1;
	while ((end - ++i) >= start)
		tab[i] = end - i;
	return (tab);
}

int			*ft_rrange(int start, int end)
{
	if (start < end)
		return (ft_rangei(start, end));
	return (ft_range(end, start));
}
*/
