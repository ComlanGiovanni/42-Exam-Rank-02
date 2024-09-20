/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:30:33 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/30 12:21:21 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
		else if ((*string == ' ') || ((*string >= '\t') && (*string <= 'r')))
			in_word = 0x0;
		string++;
	}
	return (word_count);
}


static char *ft_get_and_malloc_word(char *string)
{
	static	 int	length_word;
	char			*word;

	length_word = 0x0;
	while (string[length_word] && !((string[length_word] == ' ') \
		|| ((string[length_word] >= '\t') && (string[length_word] <= '\r'))))
		length_word++;
	word = (char *)malloc(sizeof(char) * (length_word + 0x1));
	if (!word)
		return (((void *)0x0));
	word[length_word] = '\0';
	while (length_word--)
		word[length_word] = string[length_word];
	return (word);
}

static void	ft_free_words(char **words, int number_of_word)
{
	while (number_of_word--)
		free(words[number_of_word]);
	free(words);
}

static char	**ft_split_word(char *string, char *words)
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
				return ((void *)0x0);
			}
			index++;
			while (*string && !((*string == ' ') \
				|| ((*string >= '\t') && (*string <= '\r'))))
				string++;
		}
		else
			string++;
	}
	words[index] = ((void *)0x0);
	return (words);
}

char	**ft_split(char *str)
{
	char		**words;
	static int	word_count;

	if (!str)
		return ((void *)0x0);
	word_count = ft_count_words(str);
	words = (char **)malloc(sizeof(char *) * (word_count + 0x1));
	if (!words)
		return ((void *)0x0);
	return (ft_split_words(str, words));
}

#include <stdio.h>
#include <unistd.h>

static void	ft_putstr_fd(char *string, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		while (*string)
			write(file_descriptor, string++, sizeof(char));
}

static void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static void	ft_small_put_nbr(int number)
{
	if (number > 9)
	{
		ft_small_put_nbr(number / 10);
		ft_small_put_nbr(number % 10);
	}
	else
		ft_putchar_fd((number + '0'), STDOUT_FILENO);
}

static	size_t	ft_strlen(char *string)
{
	const char	*last_char_string_pointer;

	last_char_string_pointer = string;
	if (!string)
		return (0x0);
	while (*last_char_string_pointer != '\0')
		last_char_string_pointer++;
	return (last_char_string_pointer - string);
}

int	ft_display_spilt_result_and_get_length(char **splitted_tab)
{
	int	index;

	index = 0;
	while (splitted_tab[index] != ((void *)0))
	{
		ft_putstr_fd("Index -> {", STDOUT_FILENO);
		ft_small_put_nbr(index);
		ft_putstr_fd("} \t Length -> [", STDOUT_FILENO);
		ft_small_put_nbr(ft_strlen(splitted_tab[index]));
		ft_putstr_fd("]\t  String -> \"", STDOUT_FILENO);
		ft_putstr_fd(splitted_tab[index], STDOUT_FILENO);
		ft_putstr_fd("\"", STDOUT_FILENO);
		ft_putchar_fd('\n', STDOUT_FILENO);
		index++;
	}
	ft_putstr_fd("\nSplitted_tab length: ", STDOUT_FILENO);
	ft_small_put_nbr(index);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (index);
}

void ft_rev_wstr(char **splitted_tab, int splitted_tab_length)
{
	ft_putstr_fd("Reverse word string -->> ", STDOUT_FILENO);
	while (splitted_tab_length--)
	{
		if (splitted_tab[splitted_tab_length])
		{
			ft_putstr_fd(splitted_tab[splitted_tab_length], STDOUT_FILENO);
			ft_putchar_fd(' ', STDOUT_FILENO);
		}
	}
	ft_putchar_fd('\n', STDOUT_FILENO);
}
void ft_rostring(char **splitted_tab)
{
	int	index;

	index = 0x1;
	ft_putstr_fd("Rotate word string -->> ", STDOUT_FILENO);
	while (splitted_tab[index])
	{
		ft_putstr_fd(splitted_tab[index], STDOUT_FILENO);
		ft_putchar_fd(' ', STDOUT_FILENO);
		index++;
	}
	ft_putstr_fd(splitted_tab[0], STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
}

int	main(int argc, char **argv)
{
	int		splitted_tab_length;
	char	**splitted_tab;

	splitted_tab_length = 0x0;
	if (argc == 0x2)
	{
		splitted_tab = ft_split(argv[1]);
		if (!splitted_tab)
		{
			ft_putstr_fd("Error: Failed to split the string.\n", STDOUT_FILENO);
			return (EXIT_FAILURE);
		}
	}
	else
	{
		ft_putstr_fd("Usage: ./split \"string to split\"\n", STDOUT_FILENO);
		return (EXIT_FAILURE);
	}
	splitted_tab_length = ft_display_spilt_result_and_get_length(splitted_tab);
	//ft_putchar_fd('\n', STDOUT_FILENO);
	//ft_rev_wstr(splitted_tab, splitted_tab_length);
	//ft_putchar_fd('\n', STDOUT_FILENO);
	//ft_rostring(splitted_tab);
	ft_free_words(splitted_tab, splitted_tab_length);
	return (EXIT_SUCCESS);
}
