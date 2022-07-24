/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 23:03:00 by gcomlan           #+#    #+#             */
/*   Updated: 2022/07/24 20:33:31 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int argc, char const *argv[])
{
	int	a;
	int	b;

	a = 2;
	b = 4;

	write(1, &a - '0', 1);
	write(1, " ", 2);
	write(1, &b - '0', 1);

	write(1, "\n", 2);
	ft_swap(&a, &b);

	write(1, &a - '0', 1);
	write(1, " ", 2);
	write(1, &b  - '0', 3);

	return (0);
}

/*

Assignment name  : ft_swap
Expected files   : ft_swap.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.

Your function must be declared as follows:

void	ft_swap(int *a, int *b);

*/
