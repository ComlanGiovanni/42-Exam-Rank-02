/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 00:13:42 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 22:28:43 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

char	*ft_strcpy(char *s1, char *s2)
{
	int	idx;

	idx = 0;
	while (s2[idx] != '\0')
	{
		s1[idx] = s2[idx];
		idx++;
	}
	s1[idx] = '\0';
	return (s1);
}

int	main(void)
{
	char	dest[5];
	char	src[5];

	dest[0] = '1';
	dest[1] = '2';
	dest[2] = '3';
	dest[3] = '\n';
	src[4] = '\n';
	src[0] = 'A';
	src[1] = 'B';
	src[2] = 'C';
	src[3] = '\n';
	src[4] = '\0';
	ft_putstr(dest);
	ft_strcpy(dest, src);
	ft_putstr(dest);
	return (0);
}
