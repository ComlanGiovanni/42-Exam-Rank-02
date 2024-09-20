/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 02:25:25 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 02:25:27 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write
#include <stdlib.h>

static void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static void	ft_small_put_nbr(int number)
{
	if (number > 0x9)
	{
		ft_small_put_nbr(number / 0x0a);
		ft_small_put_nbr(number % 0x0a);
	}
	else
		ft_putchar_fd((number + '0'), STDOUT_FILENO);
}

int	main(int argc, char **argv)
{
	(void)argv;
	ft_small_put_nbr(argc - 0x1);
	ft_putchar_fd((char)0x0a, STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

/*
void	ft_small_putnbr(int n)
{
	(n < 0 ? ft_putchar('-') : 1);
	n *= (n > 0 ? -1 : 1);
	(n <= -10 ? ft_small_putnbr(-(n / 10)) : 1);
	ft_putchar('0' - n % 10);
}

void	ft_small_putnbr(int nbr)
{
	char	digit_char;

	if (nbr > 9)
	{
		ft_small_putnbr(nbr / 10);
		ft_small_putnbr(nbr % 10);
	}
	else
	{
		digit_char = nbr + '0';
		write(1, &digit_char, 1);
	}
}

void	ft_small_putnbr(int n)
{
	char	digit;

	if (n >= 10)
		ft_small_putnbr(n / 10);
	digit = (n % 10) + '0';
	write(1, &digit, 1);
}
*/
