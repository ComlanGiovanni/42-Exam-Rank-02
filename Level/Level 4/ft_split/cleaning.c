/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaning.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:09:49 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/24 14:09:50 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // EXIT_SUCCESS
#include <stddef.h> // For NULL || (void *)0 || 0
#include <stdio.h>

static int	ft_is_delimiter(char c);

int	main(void)
{
	int		idx;
	char	**tab;

	idx = 0;
	tab = ft_split("    The prophecy i s 	true lol 		   ici");
	while (idx < 7)
	{
		printf("String %d : %s\n", idx, tab[idx]);
		idx++;
	}
	return (EXIT_SUCCESS);
}

static int	ft_count_words(char *str)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (ft_isspace(*str))
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}


static char **ft_split(char *str)
{
	size_t idx;
	size_t row;
	size_t column;
	char 	**split;

	row = 0;
	if (!(split = (char **)malloc(sizeof(char *) * ft_count_words(str) + 1)))
		return (NULL);
	while (ft_is_delimiter(str[idx]))
		idx++;
	while (str[idx] != '\0')
	{
		column = 0;
		if (!(split[row] = (char *)malloc(sizeof(char ) * 4096)))
			return (NULL);
		while (!ft_is_delimiter(str[idx]))
			split[row][column++] = str[idx++];
		while (ft_is_delimiter(str[idx]))
			idx++;
		split[row][column] = '\0';
		row++;
	}
	split[row] = NULL;
	return (split);
}

static int	ft_is_delimiter(char c)
{
	return (c == ' ' || c == '\t' || c == '\r');
}
