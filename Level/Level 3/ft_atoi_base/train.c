/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:41:21 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 10:47:35 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isdigit(int c)
{
	return (('0' <= c) && (c <= '9'));
}

static int	ft_isupper(int c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

static int	ft_islower(char c)
{
	return ((c >= 'a') && (c <= 'z'));
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	sign;
	int	result;

	sign = 0x1;
	result = 0x0;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str)
	{
		result *= str_base;
		if (ft_isdigit(*str))
			result += (*str - '0');
		else if (ft_isupper(*str))
			result += (*str - '7');
		else if (ft_islower(*str))
			result += (*str - 'W');
		str++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("A", 16));
	printf("%d\n", ft_atoi_base("B", 16));
	printf("%d\n", ft_atoi_base("C", 16));
	printf("%d\n", ft_atoi_base("D", 16));
	printf("%d\n", ft_atoi_base("e", 16));
	printf("%d\n", ft_atoi_base("E", 16));
	return (EXIT_SUCCESS);
}

*/
