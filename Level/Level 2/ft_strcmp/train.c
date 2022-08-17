/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:33:52 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 18:22:59 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	idx;

	idx = 0;
	while ((s1[idx] == s2[idx]) && (s1[idx] != '\0' && s2[idx] != '\0'))
		idx++;
	return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
}

/*		MAIN TEST

#include <stdio.h> // For printf
#include <string.h> //For strcmp

int	main(void)
{
	printf("%d\n", ft_strcmp("hello", "hello"));
	printf("%d\n", strcmp("hello", "hello"));
	printf("%d\n", ft_strcmp("hel", "hello"));
	printf("%d\n", strcmp("hel", "hello"));
	printf("%d\n", ft_strcmp("hello", ""));
	printf("%d\n", strcmp("hello", ""));
	//printf("%d\n", ft_strcmp(NULL, "null"));
	return (0);
}
*/
