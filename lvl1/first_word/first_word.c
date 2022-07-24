/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:31:41 by gcomlan           #+#    #+#             */
/*   Updated: 2022/07/23 15:02:43 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @brief
 *
 * ' ' 32 in ascii
 * '\t' 9 in ascii
 *
 * @param argc
 * @param argv
 * @return int
 */
int	main(int argc, const char **argv)
{
	int	idx;

	idx = 0;
	if (argc == 2)
	{
		while (argv[1][idx] == ' ' || argv[1][idx] == '\t')
			idx++;
		while ((argv[1][idx] != ' ' && argv[1][idx] != '\t') && argv[1][idx])
		{
			write(1, &argv[1][idx], 1);
			idx++;
		}
	}
	write(1, "\n", 1);
}
