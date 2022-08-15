/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:44:39 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/09 19:11:41 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int				idx;
	unsigned int	mask;
	unsigned int	bit;

	idx = 7;
	mask = 1;
	while (idx >= 0)
	{
		bit = (((octet >> idx) & mask) + '0');
		ft_putchar(bit);
		idx--;
	}
}

int	main(void)
{
	print_bits(1);
	ft_putchar('\n');
	print_bits(2);
	ft_putchar('\n');
	print_bits(3);
	ft_putchar('\n');
	print_bits(4);
	ft_putchar('\n');
	print_bits(5);
	ft_putchar('\n');
	return (0);
}

/*
#include <unistd.h>

void print_bits(unsigned char octet)
{
	int div = 128;
	int num = octet;

	while (div != 0)
	{
		if (div <= num)
		{
			write(1, "1", 1);
			num = num % div;
		}
		else
			write(1, "0", 1);
		div = div / 2;
	}
}

#include <unistd.h>

void print_bits(unsigned char octet)
{
	int	i;
	unsigned char bit;

	i = 8;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

#include <unistd.h>

void print_bits(unsigned char octet)
{
	int i;
	char c;

	i = 128;
	while (i > 0)
	{
		if (octet < i)
		{
			c = '0';
			i = i / 2;
			write(1, &c, 1);
		}
		else
		{
			c = '1';
			write(1, &c, 1);
			octet = octet - i;
			i = i / 2;
		}
	}
}

*/
