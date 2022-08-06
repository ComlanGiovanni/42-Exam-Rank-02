/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:44:39 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/06 12:25:21 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	idx;

	idx = 0;
	while (s[idx] != '\0')
	{
		if (s[idx] == c)
			return ((char *)s);
		idx++;
	}
	return ((void *)0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	idx;

	idx = 0;
	while (s[idx] != '\0')
	{
		if (ft_strchr(reject, s[idx]))
			break ;
		idx++;
	}
	return (idx);
}
