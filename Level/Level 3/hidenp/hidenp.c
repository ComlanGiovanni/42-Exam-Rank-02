/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:41:00 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 16:53:23 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

void	ft_hidenp(char *first, char *second)
{
	int	idx_first;
	int	idx_second;

	idx_first = 0;
	idx_second = 0;
	while (second[idx_second] != '\0')
	{
		if (first[idx_first] == second[idx_second])
			idx_first++;
		idx_second++;
	}
	if (idx_first == ft_strlen(first))
		ft_putchar('1');
	else
		ft_putchar('0');
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_hidenp(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}

/*
void	ft_hidenp(char *str_1, char *str_2)
{
	int	check;
	int	idx_str_1;
	int	idx_str_2;

	check = 0;
	idx_str_1 = 0;
	idx_str_2 = 0;
	while (str_1[idx_str_1] != '\0')
	{
		while (str_2[idx_str_2] != '\0')
		{
			if (str_1[idx_str_1] == str_2[idx_str_2])
			{
				check++;
				break ;
			}
			idx_str_2++;
		}
		idx_str_1++;
	}
	if (check == ft_strlen(str_1))
		ft_putchar('1');
	else
		ft_putchar('0');
}
*/
