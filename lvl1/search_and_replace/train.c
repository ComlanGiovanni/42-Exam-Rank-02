/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 22:16:21 by gcomlan           #+#    #+#             */
/*   Updated: 2022/07/27 01:24:06 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	idx;

	idx = 0;
	if (argc == 4)
	{
		while (argv[1][idx] != '\0')
		{
			if (argv[2][1] == '\0' && argv[3][1] == '\0')
			{
				if (argv[1][idx] == argv[2][0])
					write(1, &argv[3][0], 1);
				else
					write(1, &argv[1][idx], 1);
			}
			idx++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
