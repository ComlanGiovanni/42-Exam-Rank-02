/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:30:39 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/30 11:38:15 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> /// for malloc free ((void *)0)

static int	ft_count_words(char *string)
{
	static int	in_word;
	int			word_count;

	word_count = 0x0;
	in_word = 0x0;
	while (*string)
	{
		if (!((*string == ' ') || ((*string >= '\t') && (*string <= '\r'))) \
			&& !in_word)
		{
			in_word = 0x1;
			word_count++;
		}
		else if ((*string == ' ') || ((*string >= '\t') && (*string <= '\r')))
			in_word = 0x0;
		string++;
	}
	return (word_count);
}

static char	*ft_get_and_malloc_word(char *string)
{
	static int	length_word;
	char		*word;

	length_word = 0x0;
	while (string[length_word] && !((string[length_word] == ' ' ) \
		|| ((string[length_word] <= '\t') && (string[length_word] <= '\r'))))
		length_word++;
	word = (char *)malloc(sizeof(char) * (length_word + 0x1));
	if (!word)
		return (((void *)0));
	word[length_word] = '\0';
	while (length_word--)
		word[length_word] = string[length_word];
	return (word);
}

static void	ft_free_words(char **words, int count)
{
	while (count--)
		free(words[count]);
	free(words);
}

static char	**ft_split_words(char *string, char **words)
{
	int	index;

	index = 0x0;
	while (*string)
	{
		if (!((*string == ' ') || ((*string >= '\t') && (*string <= '\r'))))
		{
			words[index] = ft_get_and_malloc_word(string);
			if (!words[index])
			{
				ft_free_words(words, index);
				return (((void *)0));
			}
			index++;
			while (*string && !((*string == ' ') \
				|| ((*string >= '\t') && (*string <= '\r'))))
				string++;
		}
		else
			string++;
	}
	words[index] = ((void *)0);
	return (words);
}

char	**ft_split(char *str)
{
	char	**words;
	int		word_count;

	if (!str)
		return (((void *)0));
	word_count = ft_count_words(str);
	words = (char **)malloc(sizeof(char *) * (word_count + 0x1));
	if (!words)
		return (((void *)0));
	return (ft_split_words(str, words));
}


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

// #include <stdlib.h>

// static int	ft_is_delimiter(char c)
// {
// 	return (c == ' ' || (c >= '\t' && c <= '\r'));
// }

// int	ft_words_len(char *str)
// {
// 	int	idx;
// 	int	length;

// 	idx = 0;
// 	length = 0;
// 	while (str[idx] != '\0')
// 	{
// 		if (!ft_is_delimiter(str[idx]))
// 		{
// 			length++;
// 			idx++;
// 		}
// 		else
// 			idx++;
// 	}
// 	return (length);
// }

// char	*ft_get_word(char *str)
// {
// 	int			idx;
// 	char		*word;

// 	idx = 0;
// 	while (str[idx] != '\0' && !ft_is_delimiter(str[idx]))
// 		idx++;
// 	word = (char *)malloc(sizeof(char) * (idx + 1));
// 	if (!word)
// 		return (NULL);
// 	idx = 0;
// 	while (str[idx] != '\0' && !ft_is_delimiter(str[idx]))
// 	{
// 		word[idx] = str[idx];
// 		idx++;
// 	}
// 	word[idx] = '\0';
// 	return (word);
// }

// char	**ft_split(char *str)
// {
// 	int		idx;
// 	char	**split;

// 	idx = 0;
// 	split = (char **)malloc(sizeof(char *) * ft_words_len(str) + 1);
// 	if (!split)
// 		return (NULL);
// 	while (*str)
// 	{
// 		while (*str && ft_is_delimiter(*str))
// 			str++;
// 		if (*str && !ft_is_delimiter(*str))
// 		{
// 			split[idx] = ft_get_word(str);
// 			idx++;
// 		}
// 		while (*str && !ft_is_delimiter(*str))
// 			str++;
// 	}
// 	split[idx] = NULL;
// 	return (split);
// }

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
