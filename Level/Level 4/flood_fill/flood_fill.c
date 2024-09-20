/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:06:11 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/19 16:23:23 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void	fill(char **tab, t_point size, t_point current, char to_fill)
{
	if ((current.y < 0x0) || (current.x < 0x0) || (current.y >= size.y)
		|| (current.x >= size.x) || tab[current.y][current.x] != to_fill)
		return ;
	tab[current.y][current.x] = 'F';
	fill(tab, size, (t_point){current.x - 0x1, current.y}, to_fill);
	fill(tab, size, (t_point){current.x + 0x1, current.y}, to_fill);
	fill(tab, size, (t_point){current.x, current.y - 0x1}, to_fill);
	fill(tab, size, (t_point){current.x, current.y + 0x1}, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}

// #include <stdlib.h>
// #include <unistd.h>

// void	ft_free_area(char **area, int length)
// {
// 	while (length--)
// 	{
// 		if (area[length])
// 			free(area[length]);
// 	}
// 	free(area);
// }

// char	**ft_make_area(const char **zone, t_point size)
// {
// 	static int	row;
// 	static int	column;
// 	char		**area;

// 	area = (char **)malloc(sizeof(char *) * size.y);
// 	if (!area)
// 		return (NULL);
// 	row = 0x0;
// 	while (row < size.y)
// 	{
// 		area[row] = (char *)malloc(sizeof(char) * (size.x + 0x1));
// 		if (!area[row])
// 			ft_free_area(area, row);
// 		column = 0x0;
// 		while (column < size.x)
// 		{
// 			area[row][column] = zone[row][column];
// 			column++;
// 		}
// 		area[row][column] = '\0';
// 		row++;
// 	}
// 	area[row] = NULL;
// 	return (area);
// }

// static void	ft_putstr_fd(char *string, int file_descriptor)
// {
// 	if (file_descriptor >= 0x0)
// 		while (*string)
// 			write(file_descriptor, string++, sizeof(char));
// }

// static void	ft_putchar_fd(char character, int file_descriptor)
// {
// 	if (file_descriptor >= 0x0)
// 		write(file_descriptor, &character, sizeof(char));
// }

// void	ft_display_area(char **area)
// {
// 	static int	index;

// 	index = 0x0;
// 	while (area[index] != NULL)
// 	{
// 		ft_putstr_fd(area[index], STDOUT_FILENO);
// 		ft_putchar_fd('\n', STDOUT_FILENO);
// 		index++;
// 	}
// }

// int	main(void)
// {
// 	const char	*zone[] = {
// 		"11111111",
// 		"10001001",
// 		"10010001",
// 		"10110001",
// 		"11100001",
// 	};
// 	t_point		size;
// 	t_point		begin;
// 	char		**area;

// 	size = (t_point){0x8, 0x5};
// 	begin = (t_point){0x7, 0x4};
// 	area = ft_make_area(zone, size);
// 	if (!area)
// 		ft_putstr_fd("Area malloc fail", STDOUT_FILENO);
// 	ft_display_area(area);
// 	ft_putchar_fd('\n', STDOUT_FILENO);
// 	flood_fill(area, size, begin);
// 	ft_display_area(area);
// 	return (EXIT_SUCCESS);
// }
