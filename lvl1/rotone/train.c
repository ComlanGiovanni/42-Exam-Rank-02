/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:03:58 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/01 22:32:15 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rot_one(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if ((str[idx] >= 'A' && str[idx] <= 'Y')
			|| (str[idx] >= 'a' && str[idx] <= 'y'))
				str[idx] += 1;
		else if (str[idx] == 'Z' || str[idx] == 'z')
			str[idx] -= 25;
		write(1, &str[idx], 1);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_rot_one(argv[1]);
	write(1, "\n", 1);
}
