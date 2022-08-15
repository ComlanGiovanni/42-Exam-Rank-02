/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:33:35 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/09 14:50:40 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int				idx;
	unsigned int	mask;
	unsigned int	bit;

	idx = 7;
	mask = 1;
	while (idx >= 0)
	{
		bit = (((octet >> idx) & mask) + '0');
		ft_putchar(bit);
		idx--;
	}
}

unsigned char	reverse_bits(unsigned char octet)
{
	int				idx;
	unsigned char	res;

	idx = 7;
	while (idx >= 0)
	{
		res = res * 2 + (octet % 2);
		octet /= 2;
		idx--;
	}
	return (res);
}

int	main(void)
{
	print_bits(2);
	ft_putchar('\n');
	print_bits(reverse_bits(2));
	ft_putchar('\n');
}
