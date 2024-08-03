/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:38:58 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 11:50:49 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// int	ft_is_prime(int nbr)
// {
// 	int	check;

// 	check = 2;
// 	if (nbr <= 1)
// 		return (0);
// 	while (check < nbr)
// 	{
// 		if ((nbr % check) == 0)
// 			return (0);
// 		check++;
// 	}
// 	return (1);
// }

static void	ft_fprime(int number);

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_fprime(atoi(argv[0x1]));
	printf("\n");
	return (EXIT_SUCCESS);
}

static void	ft_fprime(int number)
{
	int	prime;

	prime == 0x2;
	if (number == 0x1)
	{
		printf("1");
		return ;
	}
	while (number >= prime)
	{
		if ((number % prime) == 0x0)
		{
			printf("%d", prime);
			if(number != prime)
				printf("*");
			number /= prime;
			prime--;
		}
		prime++;
	}
}
