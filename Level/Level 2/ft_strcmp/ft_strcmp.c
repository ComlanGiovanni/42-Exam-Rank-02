/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 21:37:33 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/23 21:37:37 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	idx;

	idx = 0x0;
	while ((s1[idx] == s2[idx]) && (s1[idx] != '\0' && s2[idx] != '\0'))
		idx++;
	return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
}

/*		Other short or long way to do

// ||

int ft_strcmp(char *s1, char *s2)
{
	while (*s1++ == *s2++)
		if (!*s1 && !*s2)
			return (0);
	return (*--s1 - *--s2);
}

// ||

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1 += 1;
		s2 += 1;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

// ||

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

// ||

int	ft_strcmp(char *s1, char *s2)
{
	int	idx;

	idx = 0;
	while ((s1[idx] != '\0' || s2[idx] != '\0') && (s1[idx] == s2[idx]))
		idx++;
	return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
}

// ||

int	ft_strcmp(char *s1, char *s2)
{
	int	idx;

	idx = 0;
	while (s1[idx] != '\0' || s2[idx] != '\0')
	{
		if (s1[idx] < s2[idx])
			return (-1);
		if (s1[idx] > s2[idx])
			return (1);
		idx++;
	}
	return (0);
}

// ||

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	idx;

	idx = 0;
	while (s1[idx])
	{
		if (s1[idx] != s2[idx])
			return (s1[idx] - s2[idx]);
		idx++;
	}
	return (s1[idx] - s2[idx]);
}

// ||

int	ft_strcmp(char *s1, char *s2)
{
	int	idx;

	idx = 0;
	while (s1[idx] == s2[idx])
	{
		if (s1[idx] == '\0' && s2[idx] == '\0')
			return (0);
		idx++;
	}
	return (s1[idx] - s2[idx]);
}


// ||

int	ft_strcmp(char *s1, char *s2)
{
	int	idx;

	idx = 0;
	if (s1 == ((void *)0) || s2 == ((void *)0))
		return (0);
	while ((s1[idx] == s2[idx]) && (s1[idx] != '\0' && s2[idx] != '\0'))
		idx++;
	return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
}

*/
