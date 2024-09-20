/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:59:54 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/21 12:00:35 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar_fd(char character, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

void	print_bits(unsigned char octet)
{
	int				index;
	unsigned char	bit;
	unsigned char	mask;

	index = 0x1 << 0x3;
	mask = 0x1 << 0x0;
	bit = 0x0 << 0x0;
	while (index--)
	{
		bit = (((octet >> index) & mask) + '0');
		ft_putchar_fd(bit, STDOUT_FILENO);
	}
}
/*
#include <stdlib.h> // EXIT_SUCCESS

int	main(void)
{
	print_bits(0x0);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(0x1);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(0x2);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(0x3);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(0x4);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(0x5);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(0x6);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(0x7);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(0x8);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(0x9);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(0xa);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(42);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(69);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}
*/
