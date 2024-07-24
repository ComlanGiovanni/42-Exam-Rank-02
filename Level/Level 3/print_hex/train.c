/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:44:39 by gcomlan           #+#    #+#             */
/*   Updated: 2024/07/23 17:36:55 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write
#include <stdlib.h>

static void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static int	ft_small_atoi(char *string)
{
	int	result;

	result = 0x0;
	while (*string)
	{
		result *= 0x0a;
		result += (*string - '0');
		string++;
	}
	return (result);
}

static void	ft_print_hex(int nbr)
{
	if (nbr > 16)
		ft_print_hex(nbr / 0x10);
	ft_putchar_fd("0123456789abcdef"[nbr % 0x10], STDOUT_FILENO);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_print_hex(ft_small_atoi(argv[1]));
	ft_putchar('\n');
	return (EXIT_SUCCESS);
}
