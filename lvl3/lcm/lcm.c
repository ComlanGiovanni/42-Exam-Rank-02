/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:50:34 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/11 13:51:20 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		++n;
	}
}



//





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






//






unsigned int	lcm(unsigned int a, unsigned int b)
{
	int		gcd;
	int		tmp_a;
	int		tmp_b;

	gcd = 0;
	tmp_a = a;
	tmp_b = b;
	while (1)
	{
		if (a == 0)
			break;
		b %= a;
		if (b == 0)
			break;
		a %= b;
	}
	gcd = (!b) ? a : b;
	return (gcd ? ((tmp_a / gcd) * tmp_b) : 0);
}


//

unsigned int    lcm(unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0)
        return (0);

    unsigned int n;
    if (a > b)
        n = a;
    else
        n = b;

    while (1)
    {
        if (n % a == 0 && n % b == 0)
            return (n);
        ++n;
    }
}
