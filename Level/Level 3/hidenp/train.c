/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:44:39 by gcomlan           #+#    #+#             */
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
