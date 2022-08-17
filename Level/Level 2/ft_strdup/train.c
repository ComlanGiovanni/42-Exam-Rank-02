/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:34:59 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 16:47:10 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h> // For NULL || (void *)0 || 0

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

char	*ft_strcpy(char *dest, const char *src)
{
	int	idx;

	idx = 0;
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
	int		size;
	char	*duplicate;

	size = ft_strlen(src);
	duplicate = (char *)malloc(sizeof(char) * size + 1);
	if (duplicate == NULL)
		return (NULL);
	return (ft_strcpy(duplicate, src));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_strdup("HELLO"));
	return (0);
}
*/
