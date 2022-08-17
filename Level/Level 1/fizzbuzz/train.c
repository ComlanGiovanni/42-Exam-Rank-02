/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 23:48:01 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 21:48:13 by gcomlan          ###   ########.fr       */
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
