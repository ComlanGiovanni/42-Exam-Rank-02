/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:41:00 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 16:53:23 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_small_putnbr(int nbr)
{
	if (nbr > 9)
	{
		ft_small_putnbr(nbr / 10);
		ft_small_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

int	main(int argc, char **argv)
{
	(void)argv;
	ft_small_putnbr(argc - 1);
	ft_putchar('\n');
	return (0);
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
