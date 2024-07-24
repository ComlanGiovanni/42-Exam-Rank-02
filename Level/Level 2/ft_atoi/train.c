/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 21:29:23 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/23 21:31:11 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(char c);
static int	ft_isdigit(int c);

static int	ft_isspace(char c)
{
	return (c == ' ' || ((c >= '\t') && (c <= '\r')));
}

static int	ft_isdigit(int c)
{
	return (('0' <= c) && (c <= '9'));
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
		result *= 0x0a;
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
