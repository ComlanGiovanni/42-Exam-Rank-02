/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 02:18:07 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/22 10:44:24 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> // For NULL || (void *)0 || 0

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

size_t	ft_strcspn(const char *s, const char *reject)
{
	const char 	*first_char_of_s;

	first_char_of_s = s;
	while (*s)
	{
		if (ft_strchr(reject, *s))
			break ;
		s++;
	}
	return (s - first_char_of_s);
}

/*
#include <stdio.h>

int	main(void)
{
	const char	*test_str1;
	const char	*reject1;
	const char	*test_str2;
	const char	*reject2;
	const char	*test_str3;
	const char	*reject3;
	const char	*test_str4;
	const char	*reject4;

	test_str1 = "tro3jan";
	reject1 = "1234";
	test_str2 = "hello world";
	reject2 = "o";
	test_str3 = "abcdef";
	reject3 = "xyz";
	test_str4 = "example";
	reject4 = "mpl";
	printf("Testing ft_strcspn:\n");
	printf("Input: '%s', Reject: '%s' -> Result: %zu\n", test_str1, reject1,
			ft_strcspn(test_str1, reject1));
	printf("Input: '%s', Reject: '%s' -> Result: %zu\n", test_str2, reject2,
			ft_strcspn(test_str2, reject2));
	printf("Input: '%s', Reject: '%s' -> Result: %zu\n", test_str3, reject3,
			ft_strcspn(test_str3, reject3));
	printf("Input: '%s', Reject: '%s' -> Result: %zu\n", test_str4, reject4,
			ft_strcspn(test_str4, reject4));
	return (0);
}
*/
