/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 02:18:01 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 11:06:09 by gicomlan         ###   ########.fr       */
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
	const char	*first_char_of_s_ptr;

	first_char_of_s_ptr = s;
	while (*s)
	{
		if (ft_strchr(reject, *s))
			break ;
		s++;
	}
	return (s - first_char_of_s_ptr);
}

// #include <stddef.h> // For NULL || (void *)0 || 0

// char	*ft_strchr(const char *s, int c)
// {
// 	size_t	idx;

// 	idx = 0;
// 	while (s[idx] != '\0')
// 	{
// 		if (s[idx] == c)
// 			return ((char *)s);
// 		idx++;
// 	}
// 	return ((void *)0);
// }

// size_t	ft_strcspn(const char *s, const char *reject)
// {
// 	size_t	idx;

// 	idx = 0;
// 	while (s[idx] != '\0')
// 	{
// 		if (ft_strchr(reject, s[idx]))
// 			break ;
// 		idx++;
// 	}
// 	return (idx);
// }

/*
#include <stdio.h>

int	main(void)
{
	printf("Code: %ld\n", ft_strcspn("trojan3", "1234" ));
	return (0);
}
*/

/*
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return ((void *)0);
}
*/
