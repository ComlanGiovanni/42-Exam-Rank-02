/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bits.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:02:48 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/27 21:40:55 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write STDOUT_FILENO
#include <stdlib.h> // EXIT_SUCCESS

#include <stdio.h>

static void	ft_putchar_fd(char character, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static void	ft_putstr_fd(char *string, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		while (*string)
			ft_putchar_fd(*string++, STDOUT_FILENO);
}

// static void	ft_small_put_nbr(int number)
// {
// 	if (number > 9)
// 	{
// 		ft_small_put_nbr(number / 10);
// 		ft_small_put_nbr(number % 10);
// 	}
// 	else
// 		ft_putchar_fd((number + '0'), STDOUT_FILENO);
// }


void	print_bits(unsigned char octet)
{
	int	index;
	unsigned char mask;
	unsigned char bit;

	index = 0x1 << 0x3;
	mask = 0x1 << 0x0;
	bit = 0x0 << 0x0;
	while (index--)
	{
		bit = (((octet >> index) & mask) + '0');
		ft_putchar_fd(bit, STDOUT_FILENO);
	}
}

unsigned char reverse_bits(unsigned char octet)
{
	int index;
	unsigned char bit;

	index = 0x1 << 0x3;
	bit = 0x0 << 0x0;
	while (index--)
	{
		bit = ((bit * 0x2) + (octet % 0x2));
		octet /= 0x2;
	}
	return (bit);
}

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 0x4) | (octet << 0x4));
}

int	main(void)
{
	unsigned char	number;

	number = 192;
	ft_putstr_fd("0x0  -> ", STDOUT_FILENO);
	print_bits(0x0);
	ft_putstr_fd("\n0x1  -> ", STDOUT_FILENO);
	print_bits(0x1);
	ft_putstr_fd("\n0x2  -> ", STDOUT_FILENO);
	print_bits(0x2);
	ft_putstr_fd("\n0x3  -> ", STDOUT_FILENO);
	print_bits(0x3);
	ft_putstr_fd("\n0x4  -> ", STDOUT_FILENO);
	print_bits(0x4);
	ft_putstr_fd("\n0x5  -> ", STDOUT_FILENO);
	print_bits(0x5);
	ft_putstr_fd("\n0x6  -> ", STDOUT_FILENO);
	print_bits(0x6);
	ft_putstr_fd("\n0x7  -> ", STDOUT_FILENO);
	print_bits(0x7);
	ft_putstr_fd("\n0x8  -> ", STDOUT_FILENO);
	print_bits(0x8);
	ft_putstr_fd("\n0x9  -> ", STDOUT_FILENO);
	print_bits(0x9);
	ft_putstr_fd("\n0xa  -> ", STDOUT_FILENO);
	print_bits(0xa);
	ft_putstr_fd("\n0x2a -> ", STDOUT_FILENO);
	print_bits(42);
	ft_putstr_fd("\n\n", STDOUT_FILENO);
	print_bits(0x2);
	ft_putstr_fd("\n", STDOUT_FILENO);
	print_bits(reverse_bits(0x2));
	printf("\nSwaping %d should be 12: %d\n", number, swap_bits(number));
	number = 42;
	printf("Swaping %d should be 162: %d\n", number, swap_bits(number));
	number = 69;
	printf("Swaping %d should be 84: %d\n", number, swap_bits(number));
	return (EXIT_SUCCESS);
}
