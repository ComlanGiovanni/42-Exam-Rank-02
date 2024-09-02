/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 21:50:50 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/22 10:55:56 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t ft_strlen(char *string)
{
	const char *last_pointer;
	last_pointer = string;

	if (!string)
		return (0x0);
	while (*last_pointer != '\0')
		last_pointer++;
	return (last_pointer - string);
}

static char *ft_strcpy(char *dest, const char *src)
{
	int		index;

	index = 0x0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	size_t		length;
	char		*duplicate;

	length = ft_strlen(src);
	duplicate = (char *)malloc(sizeof(char) * length + 0x1);
	if (duplicate == NULL)
		return (NULL);
	return (ft_strcpy(duplicate, src));
}

#include <stdio.h>

int	main(void)
{
	printf("%s", ft_strdup("HELLO"));
	return (EXIT_SUCCESS);
}
