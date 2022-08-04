/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:16:19 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/05 00:11:19 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strchr(const char *s, int c)
{
	if (*s == c)
		return ((char *)s);
	else if (!*s)
		return (NULL);
	else
		return (ft_strchr(s + 1, c));
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (ft_strchr(s2, *s1))
			return (char *)s1;
		s1++;
	}
	return (NULL);
}











char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return ((void *)0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (ft_strchr(s2, *s1))
			return ((char *)s1);
		s1++;
	}
	return ((void *)0);
}

int		main(void)
{
   char str[] = "1234567890";
   char sym[] = "9876";

   printf ("\"%s\" -.\n", ft_strpbrk(str,sym));
   return (0);
}
