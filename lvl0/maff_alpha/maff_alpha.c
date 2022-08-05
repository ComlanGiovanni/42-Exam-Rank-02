/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:27:51 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/05 14:38:28 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char	even;
	char	odd;

	even = 'B';
	odd = 'a';
	while (even <= 'Z')
	{
		ft_putchar(odd);
		ft_putchar(even);
		even += 2;
		odd += 2;
	}
	ft_putchar('\n');
	return (0);
}

/*
#include <unistd.h>

int		main(void)
{
	//use strlen if you miss a char
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
	return (0);
}
*/
