/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:04:32 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 18:46:15 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write STDOUT_FILENO
#include <stdlib.h> // EXIT_SUCCESS

static int	ft_isspace(int character)
{
	return ((character == ' ') || ((character >= '\t') && (character <= '\r')));
}

static size_t	ft_get_idx_of_last_word_char(int index, char *str)
{
	while (ft_isspace(str[index]))
		index--;
	return (index);
}

static size_t	ft_get_idx_of_first_word_char(int index_last_char, char *str)
{
	while (str[index_last_char] != '\0' && !ft_isspace(str[index_last_char]))
		index_last_char--;
	return (++index_last_char);
}

static void	ft_last_word(char *str)
{
	static size_t	idx;
	static size_t	end_of_last_word;
	static size_t	start_of_last_word;

	idx = 0x0;
	end_of_last_word = 0x0;
	start_of_last_word = 0x0;
	while (str[idx] != '\0')
		idx++;
	idx -= 0x1;
	end_of_last_word = ft_get_idx_of_last_word_char(idx, str);
	start_of_last_word = ft_get_idx_of_first_word_char(end_of_last_word, str);
	while (start_of_last_word <= end_of_last_word)
		write(STDOUT_FILENO, &str[start_of_last_word++], sizeof(char));
}

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_last_word(argv[0x1]);
	write(STDOUT_FILENO, "\n", sizeof(char));
	return (EXIT_FAILURE);
}

// static void	ft_last_word(char *str)
// {
// 	while (*str)
// 		str++;
// 	str--;
// 	while (ft_isspace(*str))
// 		str--;
// 	while (*str && !ft_isspace(*str))
// 		str--;
// 	str++;
// 	while (ft_isspace(*str))
// 		str++;
// 	while (*str && !ft_isspace(*str))
// 	{
// 		ft_putchar_fd(*str, STDOUT_FILENO);
// 		str++;
// 	}
// }

// #include <unistd.h> // For write

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// int	ft_strlen(char *str)
// {
// 	int	size;

// 	size = 0;
// 	while (str[size] != '\0')
// 		size++;
// 	return (size);
// }

// void	last_word(char *str)
// {
// 	int	idx;

// 	idx = ft_strlen(str) - 1;
// 	while (str[idx] == ' ' || str[idx] == '\t')
// 		idx--;
// 	while (str[idx] != '\0' && (str[idx] != ' ' && str[idx] != '\t'))
// 		idx--;
// 	idx++;
// 	while (str[idx] != '\0' && (str[idx] != ' ' && str[idx] != '\t'))
// 	{
// 		ft_putchar(str[idx]);
// 		idx++;
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (0);
// 	last_word(argv[1]);
// 	return (0);
// }
