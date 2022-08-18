/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 19:50:23 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/18 14:16:50 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c += ' ';
}

void	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		c -= ' ';
}

void	ft_ulstr(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		ft_tolower(str[idx]);
		ft_toupper(str[idx]);
		ft_putchar(str[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_ulstr(argv[1]);
	ft_putchar('\n');
	return (0);
}
