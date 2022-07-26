/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:49:41 by gcomlan           #+#    #+#             */
/*   Updated: 2022/07/27 01:16:41 by gcomlan          ###   ########.fr       */
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
			if ((argv[1][idx] >= 'A' && argv[1][idx] <= 'M')
				|| (argv[1][idx] >= 'a' && argv[1][idx] <= 'm'))
				argv[1][idx] += 13;
			else if ((argv[1][idx] >= 'N' && argv[1][idx] <= 'Z')
					|| (argv[1][idx] >= 'n' && argv[1][idx] <= 'z'))
				argv[1][idx] -= 13;
			write(1, &argv[1][idx], 1);
		idx++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

/*
void	rot13(char *str)
int	main(int ac, char **av)
{
	if (ac == 2)
		rot13(av[1]);
	write(1, "\n", 1);
}
*/

/*
#include <unistd.h>
int	main(int argc, char *argv[])
{
	int	idx;

	idx = 0;
	if (argc > 1)
	{
		while (argv[1][idx])
		{
			if (argv[1][idx] >= 'a' && argv[1][idx] <= 'z')
				argv[1][idx] = (argv[1][idx] - 'a' + 13) % 26 + 'a';
			else if (argv[1][idx] >= 'A' && argv[1][idx] <= 'Z')
					argv[1][idx] = (argv[1][idx] - 'A' + 13) % 26 + 'A';
			write(1, &argv[1][idx], 1);
			idx++;
		}
	}
	write(1, "\n", 1);
	return (0);
}*/
