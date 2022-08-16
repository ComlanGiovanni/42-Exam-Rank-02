/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:32:35 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/05 14:40:20 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rev_alpha(void)
{
	char	odd;
	char	even;

	odd = 'z';
	even = 'Y';
	while (even >= 'A')
	{
		ft_putchar(odd);
		ft_putchar(even);
		odd -= 2;
		even -= 2;
	}
}

int	main(void)
{
	rev_alpha();
	ft_putchar('\n');
	return (0);
}
