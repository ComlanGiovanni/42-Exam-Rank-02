/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:42:48 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 14:05:10 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write && STDOUT_FILENO
#include <stdlib.h> // EXIT_SUCCESS

static void	ft_putchar_fd(char character, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static void	ft_putstr_fd(char *string, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		while (*string)
			write(file_descriptor, string++, sizeof(char));
}

static void	ft_small_put_nbr_fd(int number, int file_descriptor)
{
	if (number > 0x9)
	{
		ft_small_put_nbr_fd((number / 0xa), file_descriptor);
		ft_small_put_nbr_fd((number % 0xa), file_descriptor);
	}
	else
		ft_putchar_fd(number + '0', file_descriptor);
}

static void	ft_fizz_buzz(int start, int end)
{
	while (start <= end)
	{
		if (((start % 0x3) == 0x0) && ((start % 0x5) == 0x0))
			ft_putstr_fd("fizzbuzz", STDOUT_FILENO);
		else if ((start % 0x3) == 0x0)
			ft_putstr_fd("fizz", STDOUT_FILENO);
		else if ((start % 0x5) == 0x0)
			ft_putstr_fd("buzz", STDOUT_FILENO);
		else
			ft_small_put_nbr_fd(start, STDOUT_FILENO);
		ft_putchar_fd('\n', STDOUT_FILENO);
		start++;
	}
}

int	main(void)
{
	ft_fizz_buzz(0x1, 100);
	return (EXIT_SUCCESS);
}

// #include <unistd.h> // For write && STDOUT_FILENO

// void	ft_putchar(char c)
// {
// 	write(STDOUT_FILENO, &c, 1);
// }

// void	ft_putstr(char *str)
// {
// 	while (*str)
// 		write(STDOUT_FILENO, str++, 1);
// }

// void	ft_small_put_nbr(int number)
// {
// 	if (number > 9)
// 	{
// 		ft_small_put_nbr(number / 10);
// 		ft_small_put_nbr(number % 10);
// 	}
// 	else
// 		ft_putchar(number + '0');
// }

// void	fizzbuzz(int start, int end)
// {
// 	while (start <= end)
// 	{
// 		if (((start % 3) == 0) && ((start % 5) == 0))
// 			ft_putstr("fizzbuzz");
// 		else if ((start % 3) == 0)
// 			ft_putstr("fizz");
// 		else if ((start % 5) == 0)
// 			ft_putstr("buzz");
// 		else
// 			ft_small_put_nbr(start);
// 		ft_putchar('\n');
// 		start++;
// 	}
// }

// int	main(void)
// {
// 	fizzbuzz(1, 100);
// 	return (0);
// }

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
	char	str[10];

	str[10] = "0123456789";
	if (number > 9)
		ft_write_number(number / 10);
	write (1, &str[number % 10], 1);
}

#include <stdio.h>
#include <unistd.h>

void	ft_write_number(int number)
{
	char	str[10];

	str[10] = "0123456789";
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



// ||

#include <unistd.h>

#define FIZZ_BUZZ "fizzbuzz"
#define FIZZ "fizz"
#define BUZZ "buzz"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_small_put_nbr(int number)
{
	if (number > 9)
	{
		ft_small_put_nbr(number / 10);
		ft_small_put_nbr(number % 10);
	}
	else
		ft_putchar(number + '0');
}

void	fizz_buzz(int number)
{
	if (((number % 3) == 0) && (((number % 5) == 0)))
		ft_putstr(FIZZ_BUZZ);
	else if (((number % 3) == 0))
		ft_putstr(FIZZ);
	else if (((number % 5) == 0))
		ft_putstr(BUZZ);
	else
		ft_small_put_nbr(number);
	ft_putchar('\n');
}

void	fizz_buzz_recursive(int number, int limit)
{
	if (number > limit)
		return ;
	fizz_buzz(number);
	fizz_buzz_recursive(number + 1, limit);
}

int	main(void)
{
	fizz_buzz_recursive(1, 100);
	return (0);
}
*/
