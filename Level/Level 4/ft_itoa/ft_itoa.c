/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:16:42 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/24 14:17:16 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	//For malloc
#include <stdio.h>	//For printf

int	length(long number)
{
	int	length;

	length = 0;
	if (number == 0)
		return (1);
	if (number < 0)
	{
		number *= -1;
		length++;
	}
	while (number > 0)
	{
		number /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int nbr)
{
	int		index;
	long	number;
	char	*string;

	number = nbr;
	index = length(number);
	string = ((char *)malloc(index + 1));
	if (!string)
		return (NULL);
	string[index--] = '\0';
	if (number == 0)
		string[0] = '0';
	else
	{
		if (number < 0)
		{
			string[0] = '-';
			number *= -1;
		}
		while (number > 0)
		{
			string[index] = (number % 10) + '0';
			number /= 10;
			index--;
		}
	}
	return (string);
}


// #include <stdlib.h>	//For malloc

// int	len_nb(long nbr)
// {
// 	int	len;

// 	len = 0;
// 	if (nbr == 0)
// 		return (1);
// 	if (nbr < 0)
// 		len++;
// 	while (nbr != 0)
// 	{
// 		nbr = nbr / 10;
// 		len++;
// 	}
// 	return (len);
// }

// char	*ft_itoa(int nbr)
// {
// 	long	len;
// 	long	tmp_len;
// 	char	*res;

// 	len = len_nb(nbr);
// 	tmp_len = nbr;
// 	if (nbr < 0)
// 		tmp_len *= -1;
// 	res = malloc(sizeof(char) * (len + 1));
// 	if (!res)
// 		return (NULL);
// 	res[len] = 0;
// 	if (tmp_len == 0)
// 		res[0] = '0';
// 	else
// 	{
// 		while (len--, tmp_len != 0)
// 		{
// 			res[len] = (tmp_len % 10) + '0';
// 			tmp_len = (tmp_len - (tmp_len % 10)) / 10;
// 		}
// 		if (nbr < 0)
// 			res[len] = '-';
// 	}
// 	return (res);
// }
