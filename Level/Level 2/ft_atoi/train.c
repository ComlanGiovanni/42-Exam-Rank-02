/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 21:29:23 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 17:25:40 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(char character)
{
	return (character == ' ' || ((character >= '\t') && (character <= '\r')));
}

static int	ft_isdigit(int character)
{
	return (('0' <= character) && (character <= '9'));
}

int	ft_atoi(const char *str)
{
	int				sign;
	long long int	result;

	sign = 0x1;
	result = 0x0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str && ft_isdigit(*str))
	{
		result *= 0xa;
		result += (*str - '0');
		str++;
	}
	return ((int)(result * sign));
}
/*

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("\"    -69252 5\" -> %d", ft_atoi("    -69252 5"));
	return (EXIT_SUCCESS);
}

*/
