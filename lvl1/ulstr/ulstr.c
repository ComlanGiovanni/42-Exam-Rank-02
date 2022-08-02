/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:49:21 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/01 23:22:39 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	idx;

	idx = 0;
	if (argc == 2)
	{
		while (argv[1][idx] != '\0')
		{
			if (argv[1][idx] >= 'a' && argv[1][idx] <= 'z')
				argv[1][idx] -= 32;
			else if (argv[1][idx] >= 'A' && argv[1][idx] <= 'Z')
				argv[1][idx] += 32;
			write(1, &argv[1][idx], 1);
			idx++;
		}
	}
	write(1, "\n", 1);
}
