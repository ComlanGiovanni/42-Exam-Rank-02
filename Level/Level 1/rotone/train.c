/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:03:58 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 16:53:23 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot_one(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (((str[idx] >= 'A') && (str[idx] < 'Y'))
			|| ((str[idx] >= 'a') && (str[idx] <= 'y')))
			str[idx] += 1;
		else if ((str[idx] == 'Z') || (str[idx] == 'z'))
			str[idx] -= 25;
		ft_putchar(str[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rot_one(argv[1]);
	ft_putchar('\n');
	return (0);
}
