/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 00:26:21 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 17:26:37 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	if (a == ((void *)0) || b == ((void *)0))
		return ;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
#include <stdio.h> // For printf

int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 20;
	printf("%d, %d\n", x, y);
	ft_swap(&x, &y);
	printf("%d, %d\n", x, y);
	printf("NULL SWAP\n");
	ft_swap(NULL, &y);
	printf("%d, %d", x, y);
	return (0);
}
*/
