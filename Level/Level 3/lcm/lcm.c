/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:50:34 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/11 17:50:37 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	lcm;

	if ((a == 0) || (b == 0))
		return (0);
	if (a > b)
		lcm = a;
	else
		lcm = b;
	while ("lcm")
	{
		if (((lcm % a) == 0) && ((lcm % b) == 0))
			return (lcm);
		++lcm;
	}
}

int	main(void)
{
	printf("%u\n", lcm(14, 24));
}

/*
unsigned int	ft_pgcd(int nbr1, int nbr2)
{
	if ((nbr1 > 0 && nbr2 > 0))
	{
		while (nbr1 != nbr2)
		{
			if (nbr1 > nbr2)
				nbr1 -= nbr2;
			else
				nbr2 -= nbr1;
		}
	}
	return (nbr1);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int		gcd;

	gcd = ft_pgcd(a, b);
	return (gcd ? ((a / gcd) * b) : 0);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int		gcd;
	int		old_a;
	int		old_b;

	gcd = 0;
	old_a = a;
	old_b = b;
	while (1)
	{
		if (a == 0)
			break ;
		b %= a;
		if (b == 0)
			break ;
		a %= b;
	}
	gcd = (!b) ? a : b;
	return (gcd ? (old_a / gcd * old_b) : 0);
}
*/
