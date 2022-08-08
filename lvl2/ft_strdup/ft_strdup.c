/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:35:05 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/08 15:19:00 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
