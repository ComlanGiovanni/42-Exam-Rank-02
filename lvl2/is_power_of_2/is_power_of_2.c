/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:41:00 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/08 16:54:07 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	unsigned long int	idx;

	idx = 1;
	while (idx <= n)
	{
		if (idx == n)
			return (1);
		idx *= 2;
	}
	return (0);
}

///while (idx < 0xffffffff)

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", is_power_of_2(0));
	printf("%d\n", is_power_of_2(2));
	printf("%d\n", is_power_of_2(4));
	printf("%d\n", is_power_of_2(6));
	printf("%d\n", is_power_of_2(8));
	printf("%d\n", is_power_of_2(32));
	printf("%d\n", is_power_of_2(42));
	printf("%d\n", is_power_of_2(67));
	printf("%d\n", is_power_of_2(124));
	printf("%d\n", is_power_of_2(256));
	return (0);
}
*/
