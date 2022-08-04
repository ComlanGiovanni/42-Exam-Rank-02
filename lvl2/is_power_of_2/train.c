/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:44:39 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/04 15:52:36 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	unsigned long	idx;

	idx = 1;
	while (idx <= n)
	{
		if (idx == n)
			return (1);
		idx *= 2;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", is_power_of_2(4));
	printf("%d\n", is_power_of_2(2));
	printf("%d\n", is_power_of_2(64));
	printf("%d\n", is_power_of_2(186));
	printf("%d\n", is_power_of_2(100));
	printf("%d\n", is_power_of_2(41));
	return (0);
}
