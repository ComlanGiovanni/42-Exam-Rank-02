/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:34:59 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/08 00:52:34 by gcomlan          ###   ########.fr       */
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

char	*ft_strcpy(char *dst, const char *src)
{
	int	idx;

	idx = 0;
	while (src[idx] != '\0')
	{
		dst[idx] = src[idx];
		idx++;
	}
	dst[idx]= '\0';
	return (dst);
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

#include <stdio.h>

int	main(void)
{
	printf("%s", ft_strdup("HELLO"));
	return (0);
}
