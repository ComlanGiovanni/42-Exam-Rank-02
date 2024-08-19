/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:17:02 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/19 16:48:35 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> //NULL
#include <stdlib.h> //malloc

static int ft_length(long number)
{
	int	length;

	length = 0x0;
	if (number == 0x0)
		return (0x1);
	if (number < 0x0)
	{
		number *= -1;
		length++;
	}
	while (number > 0x0)
	{
		number /= 0xa;
		length++;
	}
	return (length);
}

static void	ft_fill_string(char *string, long number, int length)
{
	string[length] = '\0';
	if (number == 0x0)
		string[0x0] = '0';
	else
	{
		if (number < 0x0)
		{
			string[0x0] = '-';
			number *= -1;
		}
		while (number)
		{
			length--;
			string[length] = (number % 0xa) + '0';
			number /= 0xa;
		}
	}
}

char *ft_itoa(int nbr)
{
	int length;
	long number;
	char *string;

	number = nbr;
	length = ft_length(number);
	string = ((char *)malloc (length + 0x1));
	if (!string)
		return (NULL);
	ft_fill_string(string, number, length);
	return (string);
}
#include <stdio.h>

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

