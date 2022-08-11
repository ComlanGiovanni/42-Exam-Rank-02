/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:37:03 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/05 14:40:10 by gcomlan          ###   ########.fr       */
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

/*
#include <unistd.h>

int		main(void)
{
	//use strlen if you miss a char
	write(1, "zYxWvUtSrQpOnMlKjIhGfEdCbA\n", 27);
	return (0);
}
*/
