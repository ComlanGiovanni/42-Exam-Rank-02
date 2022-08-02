/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:35:05 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/02 19:05:43 by gcomlan          ###   ########.fr       */
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

char	*ft_strcpy(char *s1, char *s2)
{
	int	idx;

	idx = 0;
	while (s2[idx] != '\0')
	{
		s1[idx] = s2[idx];
		idx++;
	}
	s1[idx] = '\0';
	return (s1);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*copy;

	size = ft_strlen(src);
	copy = (char *)malloc(sizeof(char) * size + 1);
	if (copy == NULL)
		return (NULL);
	return (ft_strcpy(copy, src));
}
