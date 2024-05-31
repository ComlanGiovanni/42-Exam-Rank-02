/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 00:13:42 by gcomlan           #+#    #+#             */
/*   Updated: 2024/04/17 16:50:05 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write && STDOUT_FILENO

void	ft_putstr(char *str)
{
	while (*str)
		write(STDOUT_FILENO, str++, 1);
}

char	*ft_strcpy(char *s1, char *s2)
{
	while (*s2)
		*s1++ = *s2++;
	*s1 = '\0';
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
