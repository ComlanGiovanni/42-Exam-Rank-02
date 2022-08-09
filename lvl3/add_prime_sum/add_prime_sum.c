/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:41:00 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/09 17:46:45 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	int_nbr;

	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		int_nbr = nbr + '0';
		write(1, &int_nbr, 1);
	}
}

int	ft_is_prime(int nbr)
{
	int	idx;

	idx = 2;
	if (nbr <= 1)
		return (0);
	while (idx < nbr)
	{
		if (nbr % idx == 0)
			return (0);
		idx++;
	}
	return (1);
}

int	ft_short_atoi(char *str)
{
	int	idx;
	int	result;

	idx = 0;
	result = 0;
	while (str[idx] != '\0')
	{
		result *= 10;
		result += str[idx] - '0';
		idx++;
	}
	return (result);
}

int	ft_add_prime_sum(int nbr)
{
	int	idx;
	int	sum;

	idx = 2;
	sum = 0;
	if (nbr <= 0)
		return (0);
	while (idx <= nbr)
	{
		if (ft_is_prime(idx))
			sum += idx;
		idx++;
	}
	return (sum);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_putnbr(ft_add_prime_sum(ft_short_atoi(argv[1])));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
