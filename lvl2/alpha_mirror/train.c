/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:27:02 by gcomlan           #+#    #+#             */
/*   Updated: 2022/07/27 01:35:35 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	idx;

	idx = 0;
	if (argc == 2)
	{
		while (argv[1][idx] != '\0')
		{
			if (argv[1][idx] >= 'A' && argv[1][idx] <= 'Z')
				argv[1][idx] = 'M' - (argv[1][idx] - 'N');
			else if (argv[1][idx] >= 'a' && argv[1][idx] <= 'z')
				argv[1][idx] = 'm' - (argv[1][idx] - 'n');
			write (1, &argv[1][idx], 1);
			idx++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
