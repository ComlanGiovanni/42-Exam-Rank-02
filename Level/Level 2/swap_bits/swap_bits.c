/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:19:02 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/24 10:19:07 by gicomlan         ###   ########.fr       */
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
