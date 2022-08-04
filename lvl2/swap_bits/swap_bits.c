/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:41:00 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/03 10:35:28 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}
/*
int	main(void)
{
	unsigned char	number;

	number = 192;
	printf("Should be 12: %d\n", swap_bits(number));
}
*/
/*
unsigned char	swap_bits(unsigned char octet)
{
	unsigned char result;
	unsigned char new_left_4_bits;
	unsigned char new_right_4_bits;

	new_left_4_bits = octet >> 4;
	new_right_4_bits = octet << 4;
	result = new_left_4_bits | new_right_4_bits;
	return (result);
}
*/
