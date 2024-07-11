/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
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

void	ft_rstr_capitalizer(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] >= 'A' && 'Z' >= str[idx])
			str[idx] += 32;
		if ((str[idx] >= 'a' && 'z' >= str[idx]) && (str[idx + 1] == ' '
				|| str[idx + 1] == '\t' || str[idx + 1] == '\0'))
			str[idx] -= 32;
		ft_putchar(str[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	int	idx;

	if (argc < 2)
		ft_putchar('\n');
	else
	{
		idx = 1;
		while (idx < argc)
		{
			ft_rstr_capitalizer(argv[idx]);
			ft_putchar('\n');
			idx++;
		}
	}
	return (0);
}
