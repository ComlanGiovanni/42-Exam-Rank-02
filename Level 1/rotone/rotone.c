/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:17:24 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/05 21:30:55 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c)
{
	write(1, &c, 1);
}

void	ft_rot_one(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if ((str[idx] >= 'A') && (str[idx] <= 'Y')
			|| (str[idx] >= 'a') && (str[idx] <= 'y'))
			str[idx] += 1;
		else if (str[idx] == 'Z' || str[idx] == 'z')
			str[idx] -= 25;
		ft_putchar(str[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rot_one(argv[1]);
	return (0);
}