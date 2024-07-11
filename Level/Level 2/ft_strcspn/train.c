/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:44:39 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 16:47:02 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> // For NULL || (void *)0 || 0

char	*ft_strchr(const char *s, int c)
{
	int	idx;

	idx = 0;
	while (s[idx] != '\0')
	{
		if (s[idx] == c)
			return ((char *)s);
		idx++;
	}
	return (NULL);
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

/*
#include <stdio.h>

int	main(void)
{
	printf("Code: %ld\n", ft_strcspn("tro3jan", "1234" ));
	return (0);
}
*/
