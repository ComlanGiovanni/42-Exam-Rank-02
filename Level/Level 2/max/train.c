/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:44:39 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 16:53:23 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write
#include <stddef.h> // For NULL || (void *)0 || 0

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	max(int *tab, unsigned int len)
{
	int	max;

	if (len <= 0 || tab == NULL)
		return (0);
	max = tab[--len];
	while (len--)
		if (tab[len] > max)
			max = tab[len];
	return (max);
}

int	main(void)
{
	int	arr[4];

	arr[0] = 7;
	arr[1] = 2;
	arr[2] = 4;
	arr[3] = 9;
	ft_putchar(max(arr, 4) + '0');
	ft_putchar(10);
	ft_putchar(max(NULL, 4) + '0');
	ft_putchar('\n');
	ft_putchar(max(arr, 0) + '0');
	ft_putchar('\n');
	return (0);
}
