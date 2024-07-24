/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:01:03 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/23 22:06:04 by gicomlan         ###   ########.fr       */
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
/**
#include <stdio.h>
#include <stdlib.h> // EXIT_SUCCESS

int	main(void)
{
	char	str1[];
	char	sym1[];
	char	str2[];
	char	sym2[];
	char	str3[];
	char	sym3[];
	char	str4[];
	char	sym4[];
	char	str5[];
	char	sym5[];
	char	str6[];
	char	sym6[];

	str1[] = "1234567890";
	sym1[] = "9876";
	str2[] = "hello world";
	sym2[] = "o";
	str3[] = "abcdef";
	sym3[] = "xyz";
	str4[] = "example";
	sym4[] = "mpl";
	str5[] = "no match here";
	sym5[] = "123";
	str6[] = "";
	sym6[] = "any";
	printf("Test 1 - Expected: '9' | Result: '%s'\n", ft_strpbrk(str1, sym1));
	printf("Test 2 - Expected: 'o' | Result: '%s'\n", ft_strpbrk(str2, sym2));
	printf("Test 3 - Expected: (null) | Result: '%s'\n", ft_strpbrk(str3,
				sym3) ? ft_strpbrk(str3, sym3) : "null");
	printf("Test 4 - Expected: 'e' | Result: '%s'\n", ft_strpbrk(str4, sym4));
	printf("Test 5 - Expected: (null) | Result: '%s'\n", ft_strpbrk(str5,
				sym5) ? ft_strpbrk(str5, sym5) : "null");
	printf("Test 6 - Expected: (null) | Result: '%s'\n", ft_strpbrk(str6,
				sym6) ? ft_strpbrk(str6, sym6) : "null");
	return (EXIT_SUCCESS);
}
*/
