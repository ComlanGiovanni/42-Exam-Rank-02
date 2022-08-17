/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:07:12 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 21:59:28 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_small_put_nbr(int nbr)
{
	if (nbr > 9)
	{
		ft_small_put_nbr(nbr / 10);
		ft_small_put_nbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

void	fizz_buzz(void)
{
	int	number;

	number = 1;
	while (number <= 100)
	{
		if (((number % 3) == 0) && ((number % 5) == 0))
			ft_putstr("fizzbuzz");
		else if ((number % 3) == 0)
			ft_putstr("fizz");
		else if ((number % 5) == 0)
			ft_putstr("buzz");
		else
			ft_small_put_nbr(number);
		ft_putchar('\n');
		number++;
	}
}

int	main(void)
{
	fizz_buzz();
	return (0);
}

/*		Other short or long way to do

#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		ft_putchar(str[idx]);
		idx++;
	}
}

void	ft_nbr(int number)
{
	if (number > 9)
		ft_nbr(number / 10);
	ft_putchar("0123456789"[number % 10]);
}

int	main(void)
{
	int	number;

	number = 1;
	while (number <= 100)
	{
		if (((number % 3) == 0) && ((number % 5) == 0))
			ft_putstr("fizzbuzz");
		else if ((number % 3) == 0)
			ft_putstr("fizz");
		else if ((number % 5) == 0)
			ft_putstr("buzz");
		else
			ft_nbr(number);
		ft_putchar('\n');
		number++;
	}
	return (0);
}

// ||

void	ft_write_number(int number)
{
	char	str[10] = "0123456789";

	if (number > 9)
		ft_write_number(number / 10);
	write (1, &str[number % 10], 1);
}

#include <unistd.h>
#include <stdio.h>

void	ft_write_number(int number)
{
	char	str[10] = "0123456789";

	if (number > 9)
		ft_write_number(number / 10);
	write (1, &str[number % 10], 1);
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_write_number(i);
		i++;
		write (1, "\n", 1);
	}
}

// ||

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int num)
{
	char	c;

	if (num >= 10)
		ft_putnbr(num / 10);
	c = (num % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	for (int idx = 1; idx <= 100; idx++)
	{
		if (idx % 3 == 0 && idx % 5 == 0)
			ft_putstr("fizzbuzz");
		else if (idx % 3 == 0)
			ft_putstr("fizz");
		else if (idx % 5 == 0)
			ft_putstr("buzz");
		else
			ft_putnbr(idx);
		write(1, "\n", 1);
	}
}

*/

