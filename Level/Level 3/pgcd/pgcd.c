/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 02:13:35 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 02:21:13 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static void	ft_pgcd(int nbr_1, int nbr_2);

int	main(int argc, char **argv)
{
	if (argc == 0x3)
		ft_pgcd(atoi(argv[0x1]), atoi(argv[0x2]));
	printf("\n");
	return (EXIT_SUCCESS);
}

static void	ft_pgcd(int nbr_1, int nbr_2)
{
	int	div;
	int	pgcd;

	div = 0x1;
	if (nbr_1 <= 0x0 || nbr_2 <= 0x0)
		return ;
	while ((div <= nbr_1) || (div <= nbr_2))
	{
		if (((nbr_1 % div) == 0x0) && ((nbr_2 % div) == 0x0))
			pgcd = div;
		div++;
	}
	printf("%d", pgcd);
}

/*
#include <stdio.h>
#include <stdlib.h>

void	pgcd(int a, int b)
{
	int i;
	int gcd;

	i = 1;
	gcd = 0;
	while (i < a && i < b)
	{
		if (a % i == 0 && b % i == 0)
			gcd = i;
		i++;
	}
	printf("%d", gcd);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		pgcd(atoi(av[1]), atoi(av[2]));
	printf("\n");
	return (0);
}
*/
