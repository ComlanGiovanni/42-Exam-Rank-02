/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:44:39 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/16 15:36:31 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(const char *str, int str_base)
{
	int	idx;
	int	sign;
	int	result;

	idx = 0;
	sign = 1;
	result = 0;
	if (str[idx] == '-')
	{
		sign *= -1;
		idx++;
	}
	while (str[idx] != '\0')
	{
		result *= str_base;
		if (str[idx] >= 'A' && str[idx] <= 'Z')
			result += str[idx] - '7';
		else if (str[idx] >= '0' && str[idx] <= '9')
			result += str[idx] - '0';
		else if (str[idx] >= 'a' && str[idx] <= 'z')
			result += str[idx] - 'W';
		idx++;
	}
	return (result * sign);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("A", 16));
	printf("%d\n", ft_atoi_base("B", 16));
	printf("%d\n", ft_atoi_base("C", 16));
	printf("%d\n", ft_atoi_base("D", 16));
	printf("%d\n", ft_atoi_base("e", 16));
	printf("%d\n", ft_atoi_base("E", 16));
	return (0);
}
*/
