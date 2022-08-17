/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:41:00 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 15:37:40 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

/*			Other short or long way to do

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	result;
	unsigned char	new_left_4_bits;
	unsigned char	new_right_4_bits;

	new_left_4_bits = octet >> 4;
	new_right_4_bits = octet << 4;
	result = new_left_4_bits | new_right_4_bits;
	return (result);
}

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) + (octet << 4));
}

*/
