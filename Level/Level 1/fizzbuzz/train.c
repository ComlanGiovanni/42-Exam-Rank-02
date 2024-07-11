/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 23:48:01 by gcomlan           #+#    #+#             */
/*   Updated: 2024/04/17 16:49:01 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write && STDOUT_FILENO

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(STDOUT_FILENO, str++, 1);
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

void	fizzbuzz(int start, int end)
{
	while (start <= end)
	{
		if (((start % 3) == 0) && ((start % 5) == 0))
			ft_putstr("fizzbuzz");
		else if ((start % 3) == 0)
			ft_putstr("fizz");
		else if ((start % 5) == 0)
			ft_putstr("buzz");
		else
			ft_small_put_nbr(start);
		ft_putchar('\n');
		start++;
	}
}

int	main(void)
{
	fizzbuzz(1, 100);
	return (0);
}
