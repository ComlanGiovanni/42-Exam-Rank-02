/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 22:22:25 by gcomlan           #+#    #+#             */
/*   Updated: 2022/07/26 00:00:51 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	idx;

	idx = 0;
	if (argc == 2)
	{
		while (argv[1][idx] == ' ' || argv[1][idx] == '\t')
			idx++;
		while ((argv[1][idx] != ' ' && argv[1][idx] != '\t')
			&& argv[1][idx] != '\0')
		{
			write(1, &argv[1][idx], 1);
			idx++;
		}
	}
	write(1, '\n', 1);
	return (0);
}
