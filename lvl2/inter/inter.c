/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:36:37 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/04 15:36:58 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_doublon(char *str, char c, int pos)
{
	int	idx;

	idx = 0;
	while (idx < pos)
	{
		if (str[idx] == c)
			return (0);
		idx++;
	}
	return (1);
}

void	inter(char *first, char *second)
{
	int	firs_idx;
	int	second_idx;

	firs_idx = 0;
	while (first[firs_idx] != '\0')
	{
		second_idx = 0;
		while (second[second_idx] != '\0')
		{
			if (first[firs_idx] == second[second_idx])
			{
				if (check_doublon(first, first[firs_idx], firs_idx) == 1)
				{
					write(1, &first[firs_idx], 1);
					break ;
				}
			}
			second_idx++;
		}
		firs_idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
