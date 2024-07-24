/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:19:10 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/24 10:20:13 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 0x4) + (octet << 0x4));
}
/*

#include <stdio.h> // For printf

int	main(void)
{
	unsigned char	number;

	number = 192;
	printf("Swaping %d should be 12: %d\n", number, swap_bits(number));
	number = 42;
	printf("Swaping %d should be 162: %d\n", number, swap_bits(number));
	number = 69;
	printf("Swaping %d should be 84: %d\n", number, swap_bits(number));
}
*/
