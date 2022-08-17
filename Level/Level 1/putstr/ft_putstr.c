/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 23:14:06 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 13:42:04 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		write(1, &str[idx], 1);
		idx++;
	}
}

/*
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i = -1;

	while (str[i++])
		write(1, &str[i], 1);
}

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
		write(1, &str[i++], 1);
}

*/
