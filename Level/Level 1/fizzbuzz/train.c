/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 23:48:01 by gcomlan           #+#    #+#             */
/*   Updated: 2024/07/15 22:24:32 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write && STDOUT_FILENO

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, sizeof(char));
}

void	ft_putstr(char *str)
{
	while (*str)
		write(STDOUT_FILENO, str++, sizeof(char));
}

void	ft_small_put_nbr(int	nbr)
{
	if (nbr > 9)
	{
		ft_small_put_nbr(nbr / 10);
		ft_small_put_nbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

void	fizzbuzz(int start, int end)
{
	while (start <= end)
	{
		if (((start % 3) == 0)  && ((start % 5) == 0))
			ft_putstr("fizzbuzz");
		else if ((start % 3) == 0)
			ft_putstr("buzz");
		else if (((start % 5) == 0))
			ft_putstr("buzz");
		else
			ft_small_put_nbr(start);
		ft_putchar('\n');
		start++;
	}
}

int	main(void)
{
	fizzbuzz(1, 10);
	return (0x0);
}
