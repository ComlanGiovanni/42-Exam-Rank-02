/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:41:00 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/06 18:16:54 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
(octet >> 0) = 11101010
    & 1      = 00000001
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int				idx;
	unsigned char	mask;
	unsigned char	bit;

	idx = 8;
	mask = 1;
	while (idx >= 0)
	{
		bit = ((octet >> idx) & mask) + '0';
		ft_putchar(bit);
		idx--;
	}
}

unsigned char	reverse_bits(unsigned char octet)
{
	int				idx;
	unsigned char	res;

	idx = 8;
	res = 0;
	while (idx > 0)
	{
		res = res * 2 + (octet % 2);
		octet /= 2;
		idx--;
	}
	return (res);
}

int	main(void)
{
	print_bits(2);
	ft_putchar('\n');
	print_bits(reverse_bits(2));
	ft_putchar('\n');
}

/*

unsigned char   reverse_bits(unsigned char octet)
{
	return  (((octet >> 0) & 1) << 7) | \
			(((octet >> 1) & 1) << 6) | \
			(((octet >> 2) & 1) << 5) | \
			(((octet >> 3) & 1) << 4) | \
			(((octet >> 4) & 1) << 3) | \
			(((octet >> 5) & 1) << 2) | \
			(((octet >> 6) & 1) << 1) | \
			(((octet >> 7) & 1) << 0);
}


unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char out = 0;

	out = out | ((octet & 128) >> 7);
	out = out | ((octet & 64) >> 5);
	out = out | ((octet & 32) >> 3);
	out = out | ((octet & 16) >> 1);
	out = out | ((octet & 8) << 1);
	out = out | ((octet & 4) << 3);
	out = out | ((octet & 2) << 5);
	out = out | ((octet & 1) << 7);
	return (out);
}
*/
