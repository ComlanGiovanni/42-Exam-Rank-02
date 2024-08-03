/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:17:02 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 12:55:44 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  //For printf
#include <stdlib.h> //For malloc

static int	ft_length(long number)
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
	index = ft_length(number);
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
	printf("0 -> %s\n", ft_itoa(0));
	printf("1 -> %s\n", ft_itoa(1));
	printf("42 -> %s\n", ft_itoa(42));
	printf("1001 -> %s\n", ft_itoa(1001));
	printf("0-> %s\n", ft_itoa(-0));
	printf("-2-> %s\n", ft_itoa(-2));
	printf("-24-> %s\n", ft_itoa(-24));
	printf("-2147483648-> %s\n", ft_itoa(-2147483648));
	printf("2147483647-> %s\n", ft_itoa(2147483647));
}

