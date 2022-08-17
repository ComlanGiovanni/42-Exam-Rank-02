/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:52:57 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 15:37:45 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // For printf

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) + (octet << 4));
}

/*		Main test

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
