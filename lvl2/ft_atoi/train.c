/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:28:54 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/09 17:52:11 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	idx;
	int	sign;
	int	result;

	idx = 0;
	sign = 1;
	result = 0;
	while (str[idx] == ' ' || (str[idx] >= '\t' && str[idx] <= '\r'))
		idx++;
	if (str[idx] == '-')
	{
		sign *= -1;
		idx++;
	}
	else if (str[idx] == '+')
		idx++;
	while (str[idx] != '\0' && (str[idx] >= '0' && str[idx] <= '9'))
	{
		result *= 10;
		result += str[idx] - '0';
		idx++;
	}
	return (result * sign);
}

/*
// or sign = -1;
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_atoi("    -69252 5"));
	return (0);
}
*/
