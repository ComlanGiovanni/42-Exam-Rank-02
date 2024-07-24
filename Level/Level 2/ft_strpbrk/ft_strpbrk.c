/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:00:46 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/23 22:06:19 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> // NULL

static char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (ft_strchr(s2, *s1))
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	char str[] = "1234567890";
	char sym[] = "9876";

	printf ("\"%s\" -.\n", ft_strpbrk(str, sym));
	return (0);
}
*/
