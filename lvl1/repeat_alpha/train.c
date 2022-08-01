/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 21:50:56 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/01 14:42:06 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alpha(char *str, int idx, int pos)
{
	while (pos >= 0)
	{
		ft_putchar(str[idx]);
		pos--;
	}
}

void	ft_repeat_alpha(char *str)
{
	int	idx;
	int	pos;

	idx = 0;
	pos = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] >= 'A' && str[idx] <= 'Z')
		{
			pos = str[idx] - 'A';
			ft_print_alpha(str, idx, pos);
		}
		else if (str[idx] >= 'a' && str[idx] <= 'z')
		{
			pos = str[idx] - 'a';
			ft_print_alpha(str, idx, pos);
		}
		else
			ft_putchar(str[idx]);
		idx++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_repeat_alpha(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
