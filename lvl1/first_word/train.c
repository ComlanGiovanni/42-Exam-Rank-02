/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 22:22:25 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/01 12:37:18 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	//(void)argc;
	//(void)argv;
	int	idx;

	idx = 0;
	if (argc == 2)
	{
		while (argv[1][idx] == ' ' || argv[1][idx] == '\t')
			idx++;
		while (argv[1][idx] && (argv[1][idx] != ' ' && argv[1][idx] != '\t'))
		{
			ft_putchar(argv[1][idx]);
			idx++;
		}
	}
	ft_putchar('\n');
	return (0);
}
