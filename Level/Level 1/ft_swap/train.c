/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 00:26:21 by gcomlan           #+#    #+#             */
/*   Updated: 2024/04/17 15:11:44 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	if (a == ((void *)0) || b == ((void *)0))
		return ;
	temp = *a;
	*a = *b;
	*b = temp;
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
