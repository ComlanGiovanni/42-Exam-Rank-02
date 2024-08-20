/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:30:33 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 12:56:45 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> //NULL
#include <stdlib.h> //malloc

int		ft_count_word(char *str)
{
	int count_word;
	int in_word;

	count_word = 0x0;
	in_word = 0x1;//we assume that we are inside a word
	while (*str)
	{
		if (!((*str == ' ') || ((*str >= '\t') && (*str <= '\r'))) && !in_word)
		{
			count_word++;
			in_word = 0x1;
		}
		else if (((*str == ' ') || ((*str >= '\t') && (*str <= '\r'))))
			in_word = 0x0;
		str++;
	}
	return(count_word);
}

void	ft_free_words(char **words, int number_of_element)
{
	while (number_of_element--)
		free(words[number_of_element]);
	free(words);
}

char *ft_get_word(char *str)
{
	int		length;
	char	*word;

	length = 0x0;
	while (str[length] && !((str[length] == ' ') \
		|| ((str[length] >= '\t') && (str[length] <= '\r')))) //motor and skipp whitespace
		length++;
	word = (char *)malloc(sizeof(char) * (length + 0x1));
	if (!word)
		return (NULL);
	word[length] = '\0';
	while (length--)
		word[length] = str[length];
	return (word);
}

char	**ft_fill_word(char *str, char **words)
{
	int	index;

	index = 0x0;
	while (*str)
	{
		if (!((*str == ' ') || ((*str >= '\t') && (*str <= '\r'))))
		{
			words[index] = ft_get_word(str);
			if (!words[index])
			{
				ft_free_words(words, index);
				return (NULL);//or a malloc that we can free
			}
			index++; //increment right after
			while (*str && !((*str == ' ') \
				|| ((*str >= '\t') && (*str <= '\r')))) //we need a motor to move
				str++;
		}
		else //no need to specifier that we are skipping whitespace here
			str++;
	}
	words[index] = NULL;
	return (words);
}

char	**ft_split(char *str)
{
	char	**words;
	int		count_word;
	count_word = ft_count_word(str);
	words = (char **)malloc(sizeof(char *) * (count_word + 0x1));
	if (!words)
		return (NULL);
	return (ft_fill_word(str, words));
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
	while (splitted_tab[index] != NULL)
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
	ft_putchar_fd('\n', STDOUT_FILENO);
	ft_rev_wstr(splitted_tab, splitted_tab_length);
	ft_putchar_fd('\n', STDOUT_FILENO);
	ft_rostring(splitted_tab);
	ft_free_words(splitted_tab, splitted_tab_length);
	return (EXIT_SUCCESS);
}
