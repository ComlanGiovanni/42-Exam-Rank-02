/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:44:39 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 16:53:23 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_small_atoi(char *str)
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

void	ft_print_hex(int nbr)
{
	if (nbr > 16)
		ft_print_hex(nbr / 16);
	ft_putchar("0123456789abcdef"[nbr % 16]);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_print_hex(ft_small_atoi(argv[1]));
	ft_putchar('\n');
	return (0);
}
