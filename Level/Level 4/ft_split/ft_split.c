/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:06:11 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/16 15:30:21 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdlib.h>

char	**ft_split(char *str)
{
	int		idx;
	int		row;
	int		column;
	char	**split;

	idx = 0;
	row = 0;
	if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[idx] == ' ' || str[idx] == '\t' || str[idx] == '\n')
		idx++;
	while (str[idx])
	{
		column = 0;
		if (!(split[row] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		while (str[idx] != ' ' && str[idx] != '\t' && str[idx] != '\n')
			split[row][column++] = str[idx++];
		while (str[idx] == ' ' || str[idx] == '\t' || str[idx] == '\n')
			idx++;
		split[row][column] = '\0';
		row++;
	}
	split[row] = NULL;
	return (split);
}
*/
#include <stdlib.h>

int	ft_is_delimiter(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int	ft_words_len(char *str)
{
	int	idx;
	int	length;

	idx = 0;
	length = 0;
	while (str[idx] != '\0')
	{
		if (!ft_is_delimiter(str[idx]))
		{
			length++;
			idx++;
		}
		else
			idx++;
	}
	return (length);
}

char	*ft_get_word(char *str)
{
	int			idx;
	char		*word;

	idx = 0;
	while (str[idx] != '\0' && !ft_is_delimiter(str[idx]))
		idx++;
	word = (char *)malloc(sizeof(char) * (idx + 1));
	if (!word)
		return (NULL);
	idx = 0;
	while (str[idx] != '\0' && !ft_is_delimiter(str[idx]))
	{
		word[idx] = str[idx];
		idx++;
	}
	word[idx] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	int		idx;
	char	**split;

	idx = 0;
	split = (char **)malloc(sizeof(char *) * ft_words_len(str) + 1);
	if (!split)
		return (NULL);
	while (*str)
	{
		while (*str && ft_is_delimiter(*str))
			str++;
		if (*str && !ft_is_delimiter(*str))
		{
			split[idx] = ft_get_word(str);
			idx++;
		}
		while (*str && !ft_is_delimiter(*str))
			str++;
	}
	split[idx] = NULL;
	return (split);
}

/*
#include <stdio.h>

int	main(void)
{
	int		idx;
	char	**tab;

	idx = 0;
	tab = ft_split("The prophecy is true");
	while (idx < 4)
	{
		printf("String %d : %s\n", idx, tab[idx]);
		idx++;
	}
	return (0);
}
//free later
*/
