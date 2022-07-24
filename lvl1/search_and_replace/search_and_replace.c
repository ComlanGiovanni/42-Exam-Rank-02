/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan < gcomlan@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:16:51 by gcomlan           #+#    #+#             */
/*   Updated: 2022/07/23 14:27:02 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char const *argv[])
{
	int	idx;

	idx = 0;
	if (argc == 4)
	{
		if (!argv[2][1] && !argv[3][1])
		{
			while (argv[1][idx])
			{
				if (argv[1][idx] == argv[2][0])
					write(1, &argv[3][0], 1);
				else
					write(1, &argv[1][idx], 1);
				idx += 1;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
