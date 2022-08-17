/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:11:35 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 16:53:23 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

void	ft_swap_char(char *char_1, char *char_2)
{
	char	tmp;

	tmp = *char_1;
	*char_1 = *char_2;
	*char_2 = tmp;
}

char	*ft_strrev(char *str)
{
	int		idx;
	int		len;

	idx = 0;
	len = ft_strlen(str) - 1;
	while (idx < len)
	{
		ft_swap_char(&str[idx], &str[len]);
		idx++;
		len--;
	}
	return (str);
}
