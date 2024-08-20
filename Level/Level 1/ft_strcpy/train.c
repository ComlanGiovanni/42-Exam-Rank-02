/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:23:24 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 14:31:14 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write && STDOUT_FILENO
#include <stdlib.h> //EXIT_SUCCESS STDOUT_FILENO

void	ft_putstr(char *str)
{
	while (*str)
		write(STDOUT_FILENO, str++, sizeof(char));
}

char	*ft_strcpy(char *s1, char *s2)
{
	static int	index;

	index = 0x0;
	while (s2[index] != '\0')
	{
		s1[index] = s2[index];
		index++;
	}
	s1[index] = '\0';
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
	return (EXIT_FAILURE);
}

// char	*ft_strcpy(char *s1, char *s2)
// {
// 	while ((*s1++ = *s2++))
// 		;
// 	return (s1);
// }
