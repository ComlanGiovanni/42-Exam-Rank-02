/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 21:50:42 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/22 10:57:07 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // EXIT_SUCCESS
#include <stddef.h> // NULL

static size_t	ft_strlen(char *string)
{
	const char	*last_char_string_pointer;

	last_char_string_pointer = string;
	if (!string)
		return (0x0);
	while (*last_char_string_pointer != '\0')
		last_char_string_pointer++;
	return (last_char_string_pointer - string);
}

static char	*ft_strcpy(char *destination, const char *source)
{
	int		index;

	index = 0x0;
	while (source[index] != '\0')
	{
		destination[index] = source[index];
		index++;
	}
	destination[index] = '\0';
	return (destination);
}

char	*ft_strdup(char *source)
{
	size_t	size;
	char	*duplicate;

	size = ft_strlen(source);
	duplicate = (char *)malloc(sizeof(char) * size + 1);
	if (duplicate == NULL)
		return (NULL);
	return (ft_strcpy(duplicate, source));
}

// static char *ft_strcpy(char *dest, const char *src)
// {
// 	while (*src)
// 	{
// 		*dest = *src;
// 		src++;
// 	}
// 	*dest = '\0';
// 	return (dest);
// }
// #include <stdlib.h>
// #include <stddef.h> // For NULL || (void *)0 || 0

// int	ft_strlen(char *str)
// {
// 	int	size;

// 	size = 0;
// 	while (str[size] != '\0')
// 		size++;
// 	return (size);
// }

// char	*ft_strcpy(char *dest, const char *src)
// {
// 	int	idx;

// 	idx = 0;
// 	while (src[idx] != '\0')
// 	{
// 		dest[idx] = src[idx];
// 		idx++;
// 	}
// 	dest[idx] = '\0';
// 	return (dest);
// }

// char	*ft_strdup(char *src)
// {
// 	int		size;
// 	char	*duplicate;

// 	size = ft_strlen(src);
// 	duplicate = (char *)malloc(sizeof(char) * size + 1);
// 	if (duplicate == NULL)
// 		return (NULL);
// 	return (ft_strcpy(duplicate, src));
// }

/*
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	char	*sptr;
	char	*dptr;

	sptr = src;
	while (*sptr++)
		;
	dup = malloc(sptr - src + 1);
	if (!dup)
		return (NULL);
	dptr = dup;
	while ((*dptr++ = *src++) != '\0')
		;
	return (dup);
}

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*strcpy;

	length = 0;
	while (src[length])
		length++;
	strcpy = malloc(length + 1);
	if (strcpy != NULL)
	{
		i = 0;
		while (src[i])
		{
			strcpy[i] = src[i];
			i++;
		}
		strcpy[i] = '\0';
	}
	return (strcpy);
}
*/
