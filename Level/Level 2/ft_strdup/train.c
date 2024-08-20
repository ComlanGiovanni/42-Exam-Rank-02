/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 21:50:50 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 18:16:13 by gicomlan         ###   ########.fr       */
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

static char	*ft_strcpy(char *dest, const char *src)
{
	int		idx;

	idx = 0x0;
	while (src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	size_t	size;
	char	*duplicate;

	size = ft_strlen(src);
	duplicate = (char *)malloc(sizeof(char) * size + 0x1);
	if (duplicate == NULL)
		return (NULL);
	return (ft_strcpy(duplicate, src));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_strdup("HELLO"));
	return (EXIT_SUCCESS);
}
*/
