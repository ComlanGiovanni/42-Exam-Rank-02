/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:41:00 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 16:53:23 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write // For printf

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int				idx;
	unsigned char	mask;
	unsigned char	bit;

	idx = 7;
	mask = 1;
	while (idx >= 0)
	{
		bit = (((octet >> idx) & mask) + '0');
		ft_putchar(bit);
		idx--;
	}
}

/*			Other short or long way to do

// ||

void	print_bits(unsigned char octet)
{
	int				idx;
	unsigned char	bit;

	idx = 8;
	while (idx--)
	{
		bit = ((octet >> idx & 1) + '0');
		write(1, &bit, 1);
	}
}

#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int	bit;

	bit = 128;
	while (bit > 0)
	{
		if (octet >= bit)
		{
			ft_putchar('1');
			octet %= bit;
			bit /= 2;
		}
		else
		{
			ft_putchar('0');
			bit /= 2;
		}
	}
}

// ||

#include <unistd.h> // For write

void	print_bits(unsigned char octet)
{
	int	bit;
	int	oct;

	bit = 128;
	oct = octet;
	while (bit > 0)
	{
		if (bit & oct)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		bit >>= 1;
	}
}

// ||

#include <unistd.h> // For write

void	print_bits(unsigned char octet)
{
	int				idx;
	unsigned char	mask;
	unsigned char	bit;

	idx = 7;
	mask = 1;
	while (idx >= 0)
	{
		bit = (((octet >> idx) & mask) + '0');
		write(1, &bit, 1);
		idx--;
	}
}

// ||

void	print_bits(unsigned char octet)
{
	int	bit;

	bit = 128;
	while (bit)
	{
		(octet & bit) ? write(1, "1", 1) : write(1, "0", 1);
		bit = bit / 2;
	}
}

// ||

#include <unistd.h> // For write

void print_bits(unsigned char octet)
{
	int		bit;
	char	c;

	bit = 128;
	while (bit > 0)
	{
		if (octet < bit)
		{
			c = '0';
			bit = bit / 2;
			write(1, &c, 1);
		}
		else
		{
			c = '1';
			write(1, &c, 1);
			octet = octet - bit;
			bit = bit / 2;
		}
	}
}

// ||

#include <unistd.h> // For write

void print_bits(unsigned char octet)
{
	int	bit;
	int	oct;

	bit = 128;
	oct = octet;
	while (bit != 0)
	{
		if (bit <= oct)
		{
			write(1, "1", 1);
			oct = oct % bit;
		}
		else
			write(1, "0", 1);
		bit = bit / 2;
	}
}

*/
