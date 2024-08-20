/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:26:50 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 18:42:21 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write STDOUT_FILENO
#include <stdlib.h> // EXIT_SUCCESS

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

static void	ft_putstr_fd(char *string, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		while (*string)
			write(file_descriptor, string++, sizeof(char));
}

static size_t	ft_count_matching_char(char *first, char *second)
{
	static size_t	idx_first;
	static size_t	idx_second;

	idx_first = 0x0;
	idx_second = 0x0;
	while (second[idx_second] != '\0')
	{
		if (first[idx_first] == second[idx_second])
			idx_first++;
		idx_second++;
	}
	return (idx_first);
}

void	ft_wd_match(char *first, char *second)
{
	static size_t	matching_chars;

	matching_chars = ft_count_matching_char(first, second);
	if (matching_chars == ft_strlen(first))
		ft_putstr_fd(first, STDOUT_FILENO);
}

int	main(int argc, char **argv)
{
	if (argc == 0x3)
		ft_wd_match(argv[0x1], argv[0x2]);
	ft_putstr_fd("\n", STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

// #include <unistd.h> // For write

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putstr(char *str)
// {
// 	while (*str)
// 		write(1, str++, 1);
// }

// int	ft_strlen(char *str)
// {
// 	int	size;

// 	size = 0;
// 	while (str[size] != '\0')
// 		size++;
// 	return (size);
// }

// void	ft_wd_match(char *first, char *second)
// {
// 	int	idx_first;
// 	int	idx_second;

// 	idx_first = 0;
// 	idx_second = 0;
// 	while (second[idx_second] != '\0')
// 	{
// 		if (first[idx_first] == second[idx_second])
// 			idx_first++;
// 		idx_second++;
// 	}
// 	if (idx_first == ft_strlen(first))
// 		ft_putstr(first);
// }

// int	main(int argc, char **argv)
// {
// 	if (argc == 3)
// 		ft_wd_match(argv[1], argv[2]);
// 	ft_putchar('\n');
// 	return (0);
// }

/*
#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

void	wd_match(char *first, char *second)
{
	int	idx_first;
	int	idx_second;
	int	word_len;

	idx_first = 0;
	idx_second = 0;
	word_len = 0;
	while (first[idx_first] != '\0')
	{
		while (second[idx_second] != '\0')
		{
			if (first[idx_first] == second[idx_second])
			{
				word_len++;
				break ;
			}
			idx_second++;
		}
		idx_first++;
	}
	if (word_len == ft_strlen(first))
		ft_putstr(first);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		wd_match(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
*/
