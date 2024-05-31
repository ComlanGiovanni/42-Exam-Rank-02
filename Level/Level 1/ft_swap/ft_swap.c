/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 23:03:00 by gcomlan           #+#    #+#             */
/*   Updated: 2024/04/17 15:11:50 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
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
