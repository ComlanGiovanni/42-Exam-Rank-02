/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:06:16 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/16 01:17:28 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	len_nb(long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		len++;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	len;
	long	tmp_len;
	char	*res;

	len = len_nb(n);
	tmp_len = n;
	if (n < 0)
		tmp_len *= -1;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = 0;
	if (tmp_len == 0)
		res[0] = '0';
	else
	{
		while (len--, tmp_len != 0)
		{
			res[len] = (tmp_len % 10) + '0';
			tmp_len = (tmp_len - (tmp_len % 10)) / 10;
		}
		if (n < 0)
			res[len] = '-';
	}
	return (res);
}

/*

git hub copilot idea
char	*ft_itoa(int nbr)
{
	int		idx;
	int		nbr_size;
	char	*str;
	int		sign;

	idx = 0;
	nbr_size = 0;
	sign = 1;
	if (nbr < 0)
	{
		sign = -1;
		nbr_size++;
	}
	while (nbr / (sign * 10) > 0)
	{
		nbr_size++;
		nbr = nbr / (sign * 10);
	}
	if (!(str = (char *)malloc(sizeof(char) * (nbr_size + 1))))
		return (NULL);
	str[nbr_size] = '\0';
	while (nbr_size > 0)
	{
		str[nbr_size - 1] = (nbr * sign) + 48;
		nbr = nbr / 10;
		nbr_size--;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
*/
