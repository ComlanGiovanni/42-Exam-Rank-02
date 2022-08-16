/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:06:11 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/16 13:26:57 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_blank(char c)
{
	return (c == ' ' || c == '\t');
}

void	ft_print_first_word(char *str, int space)
{
	while (str[space] != '\0' && !ft_blank(str[space]))
		ft_putchar(str[space++]);
}

void	rostring(char *str)
{
	int		idx;
	int		space;

	idx = 0;
	while (str[idx] != '\0' && ft_blank(str[idx]))
		idx++;
	space = idx;
	while (str[idx] != '\0' && !ft_blank(str[idx]))
		idx++;
	while (str[idx] != '\0')
	{
		if (str[idx] != '\0' && !ft_blank(str[idx]) && ft_blank(str[idx - 1]))
		{
			while (str[idx] && !ft_blank(str[idx]))
			{
				ft_putchar(str[idx]);
				idx++;
			}
			ft_putchar(' ');
		}
		idx++;
	}
	ft_print_first_word(str, space);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		rostring(argv[1]);
	ft_putchar('\n');
	return (0);
}
