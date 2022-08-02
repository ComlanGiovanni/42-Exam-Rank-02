/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:28:54 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/02 13:36:02 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	idx;
	int	res;
	int	sign;

	idx = 0;
	res = 0;
	sign = 1;
	while (str[idx] == 32 || (str[idx] >= 9 && str[idx] <= 13))
		idx++;
	if (str[idx] == '-')
	{
		sign = -1;
		idx++;
	}
	else if (str[idx] == '+')
		idx++;
	while (str[idx] != '\0' && str[idx] >= '0' && str[idx] <= '9')
	{
		res *= 10;
		res += str[idx] - '0';
		idx++;
	}
	return (res * sign);
}

