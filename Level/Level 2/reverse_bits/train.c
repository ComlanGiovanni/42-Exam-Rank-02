/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:00:09 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/21 12:02:05 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int 		index;
	unsigned char bit;


	index = (0x1 << 0x3);
	index = (0x0 << 0x0);
	while (index--)
	{
		bit = ((bit * 0x2) + (octet % 0x2));
		octet /= 0x2;
	}
	return (bit);
}

static void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0x0)
		write(fd, &c, sizeof(char));
}

void	print_bits(unsigned char octet)
{
	int				index;
	unsigned char	bit;
	unsigned char	mask;

	index = (0x1 << 0x3);
	mask = (0x1 << 0x0);
	bit = (0x0 << 0x0);
	while (index--)
	{
		bit = (((octet >> index) & mask) + '0');
		ft_putchar_fd(bit, STDOUT_FILENO);
	}
}

int	main(void)
{
	print_bits(0x2);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(reverse_bits(0x2));
	ft_putchar_fd('\n', STDOUT_FILENO);
}
