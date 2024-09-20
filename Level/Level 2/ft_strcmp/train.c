/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 21:37:27 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 17:30:16 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1++ == *s2++)
		if (!*s1 && !*s2)
			return (0x0);
	return (*--s1 - *--s2);
}

// int	ft_strcmp(char *s1, char *s2)
// {
// 	int	idx;

// 	idx = 0;
// 	while ((s1[idx] == s2[idx]) && (s1[idx] != '\0' && s2[idx] != '\0'))
// 		idx++;
// 	return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
// }
/*
#include <stdio.h> // For printf
#include <string.h> //For strcmp

int	main(void)
{
	printf("%d\n", ft_strcmp("hello", "hello"));
	printf("%d\n", strcmp("hello", "hello"));
	printf("%d\n", ft_strcmp("hel", "hello"));
	printf("%d\n", strcmp("hel", "hello"));
	printf("%d\n", ft_strcmp("hello", ""));
	printf("%d\n", strcmp("hello", ""));
	//printf("%d\n", ft_strcmp(NULL, "null"));
	return (0);
}
*/
