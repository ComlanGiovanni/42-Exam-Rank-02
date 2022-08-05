/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:53:37 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/05 18:34:10 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat(char c, int pos)
{
	while (pos >= 0)
	{
		ft_putchar(c);
		pos--;
	}
}

void	repeat_alpha(char *str)
{
	int	idx;
	int	pos;

	idx = 0;
	pos = 0;
	while (str[idx] != '\0')
	{
		if ((str[idx] >= 'A') && (str[idx] <= 'Z'))
		{
			pos = (str[idx] - 'A');
			repeat(str[idx], pos);
		}
		else if ((str[idx] >= 'A') && (str[idx] <= 'z'))
		{
			pos = (str[idx] - 'a');
			repeat(str[idx], pos);
		}
		else
			ft_putchar(str[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	ft_putchar('\n');
	return (0);
}
