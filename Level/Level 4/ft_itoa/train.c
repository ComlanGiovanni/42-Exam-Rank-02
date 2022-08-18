/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:06:16 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/18 15:23:58 by gcomlan          ###   ########.fr       */
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



int	main(void)
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(1));
	printf("%s\n", ft_itoa(42));
	printf("%s\n", ft_itoa(1001));
	printf("%s\n", ft_itoa(-0));
	printf("%s\n", ft_itoa(-2));
	printf("%s\n", ft_itoa(-24));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
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
