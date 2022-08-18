/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 23:03:00 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/18 12:50:43 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

/*
void	ft_swap(int *a, int *b)
{
	int	tmp;

	if (a == ((void *)0) || b == ((void *)0))
		return ;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_swap(int *a, int *b)
{
	(*a ^= *b), (*b ^= *a), (*a ^= *b);
}

*/
