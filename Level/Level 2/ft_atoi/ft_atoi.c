/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:24:50 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 17:24:51 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// int	ft_atoi(const char *str)
// {
// 	int	idx;
// 	int	sign;
// 	int	result;

// 	idx = 0;
// 	sign = 1;
// 	result = 0;
// 	while (str[idx] == ' ' || (str[idx] >= '\t' && str[idx] <= '\r'))
// 		idx++;
// 	if (str[idx] == '-')
// 	{
// 		sign = -1;
// 		idx++;
// 	}
// 	else if (str[idx] == '+')
// 		idx++;
// 	while (str[idx] != '\0' && (str[idx] >= '0' && str[idx] <= '9'))
// 	{
// 		result *= 10;
// 		result += str[idx] - '0';
// 		idx++;
// 	}
// 	return (result * sign);
// }
