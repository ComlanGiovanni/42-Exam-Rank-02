/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 21:50:56 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 22:51:36 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	index;
	int	alpha_index;

	index = 0;
	alpha_index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			alpha_index = str[index] - 'A';
			while (alpha_index-- >= 0)
				write(1, &str[index], 1);
		}
		else if (str[index] >= 'a' && str[index] <= 'z')
		{
			alpha_index = str[index] - 'a';
			while (alpha_index-- >= 0)
				write(1, &str[index], 1);
		}
		else
			write(1, &str[index], 1);
		index++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, &"\n", 1);
	return (0);
}
