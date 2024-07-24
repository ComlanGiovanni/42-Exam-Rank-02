/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 08:47:28 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/24 09:01:21 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	unsigned long int	idx;

	idx = 0x1;
	while (idx <= n)
	{
		if (idx == n)
			return (0x1);
		idx *= 0x2;
	}
	return (0x0);
}

// int	is_power_of_2(unsigned int n)
// {
// 	return (n != 0 && (n & (n - 1)) == 0);
// }

#include <stdio.h>

int	main(void)
{
	printf("%d\n", is_power_of_2(0));
	printf("%d\n", is_power_of_2(1));
	printf("%d\n", is_power_of_2(4));
	printf("%d\n", is_power_of_2(6));
	printf("%d\n", is_power_of_2(8));
	printf("%d\n", is_power_of_2(32));
	printf("%d\n", is_power_of_2(42));
	printf("%d\n", is_power_of_2(67));
	printf("%d\n", is_power_of_2(124));
	printf("%d\n", is_power_of_2(128));
	printf("%d\n", is_power_of_2(256));
	return (0);
}
