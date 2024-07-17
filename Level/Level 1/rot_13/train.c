/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:49:41 by gcomlan           #+#    #+#             */
/*   Updated: 2024/07/15 23:56:45 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write
#include <stdlib.h>

void	rotation(char *str, int shift)
{
	while (*str)
	{
		if ((*str >= 'a') && (*str <= 'z'))
			*str = ('a' + (((*str - 'a') + shift) % 26));
		else if ((*str >= 'A') && (*str <= 'Z'))
			*str = ('A' + (((*str - 'A') + shift) % 26));
		write(STDOUT_FILENO, *str, sizeof(char));
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rotation(argv[1], 13);
	write(STDOUT_FILENO, '\n', sizeof(char));
	return (EXIT_SUCCESS);
}
