/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:29:38 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/05 14:37:04 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	alpha(void)
{
	char	odd;
	char	even;

	odd = 'a';
	even = 'B';
	while (even <= 'Z')
	{
		ft_putchar(odd);
		ft_putchar(even);
		odd += 2;
		even += 2;
	}
}

int	main(void)
{
	alpha();
	ft_putchar('\n');
	return (0);
}
