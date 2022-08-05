/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 13:25:25 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/05 13:30:10 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_countdown(void)
{
	char	digit;

	digit = '9';
	while (digit >= '0')
		ft_putchar(digit--);
	ft_putchar('\n');
}

int	main(void)
{
	ft_countdown();
	return (0);
}
