/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:00:09 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 14:27:31 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

// void	ft_swap(int *a, int *b)
// {
// 	(*a ^= *b), (*b ^= *a), (*a ^= *b);
// }
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
	return (0x0);
}
*/
