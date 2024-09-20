/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:00:04 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/24 10:09:13 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int				idx;
	unsigned char	bit;

	idx = 0x8;
	while (idx--)
	{
		bit = ((bit * 0x2) + (octet % 0x2));
		octet /= 0x2;
	}
	return (bit);
}
// unsigned char	reverse_bits(unsigned char octet)
// {
// 	int				idx;
// 	unsigned char	bit;

// 	idx = 7;
// 	while (idx >= 0)
// 	{
// 		bit = ((bit * 2) + (octet % 2));
// 		octet /= 2;
// 		idx--;
// 	}
// 	return (bit);
// }
/*		Other short or long way to do

unsigned char	reverse_bits(unsigned char octet)
{
	return (((octet >> 0) & 1) << 7) | \
			(((octet >> 1) & 1) << 6) | \
			(((octet >> 2) & 1) << 5) | \
			(((octet >> 3) & 1) << 4) | \
			(((octet >> 4) & 1) << 3) | \
			(((octet >> 5) & 1) << 2) | \
			(((octet >> 6) & 1) << 1) | \
			(((octet >> 7) & 1) << 0);
}

// ||

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	out;

	out = 0;
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

// ||

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

*/
