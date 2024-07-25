/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 01:59:53 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 02:12:06 by gicomlan         ###   ########.fr       */
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
	char	*hexa;

	hexa = "0123456789abcdef";
	if (nbr >= 0x10)
	{
		ft_print_hex(nbr / 0x10);
		ft_print_hex(nbr % 0x10);
	}
	else
		ft_putchar_fd(hexa[nbr], STDOUT_FILENO);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_print_hex(ft_small_atoi(argv[1]));
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}
