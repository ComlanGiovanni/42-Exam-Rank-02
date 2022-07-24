/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:27:51 by gcomlan           #+#    #+#             */
/*   Updated: 2022/07/24 23:31:51 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;

	i = -1;
	if (ac > 1)
		while (av[1][++i])
			write(1, &av[1][i], 1);
	write(1, "\n", 1);
	return (0);
}
