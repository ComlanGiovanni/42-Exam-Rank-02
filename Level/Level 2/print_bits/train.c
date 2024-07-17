/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:44:39 by gcomlan           #+#    #+#             */
/*   Updated: 2024/07/16 00:07:15 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int				idx;
	unsigned char	bit;
	unsigned char 	mask;

	idx = 8;
	mask = 1;
	while (idx >= 0)
	{
		bit = ((octet >> idx) & mask) + '0';
		ft_putchar(bit);
		idx--;
	}
}

/*		Main Test

int	main(void)
{
	print_bits(0);
	ft_putchar('\n');
	print_bits(1);
	ft_putchar('\n');
	print_bits(2);
	ft_putchar('\n');
	print_bits(3);
	ft_putchar('\n');
	print_bits(42);
	ft_putchar('\n');
	print_bits(69);
	ft_putchar('\n');
	return (0);
}

*/
