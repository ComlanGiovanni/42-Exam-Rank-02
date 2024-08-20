/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:23:20 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 14:23:22 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*		Other short or long way to do

char	*ft_strcpy(char *s1, char *s2)
{
	while ((*s1++ = *s2++))
		;
	return (s1);
}

char	*ft_strcpy(char *s1, char *s2)
{
	while (*s2)
		*s1++ = *s2++;
	*s1 = '\0';
	return (s1);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int	idx = 0;
	while (s2[idx++] != '\0')
		s1[idx] = s2[idx];
	s1[idx] = '\0';
	return (s1);
}

char	*ft_strcpy(char *s1, char *s2)
{
	while (*s2)
		*s1++ = *s2++;
	*s1 = '\0';
	return (s1);
}

//	||

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

*/
