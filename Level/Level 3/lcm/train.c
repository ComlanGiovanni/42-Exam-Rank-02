/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:07:36 by gcomlan           #+#    #+#             */
/*   Updated: 2024/07/23 04:50:57 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	lcm;

	if ((a == 0x0) || (b == 0x0))
		return (0x0);
	if (a > b)
		lcm = a;
	else
		lcm = b;
	while ("The prophecy is true")
	{
		if (((lcm % a) == 0x0) && ((lcm % b) == 0x0))
			return (lcm);
		++lcm;
	}
}

int	main(void)
{
	printf("%u\n", lcm(14, 24));
	return (EXIT_SUCCESS);
}
