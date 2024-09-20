/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:26:45 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 18:40:55 by gicomlan         ###   ########.fr       */
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
// #include <stdlib.h>

// static void	ft_putstr_fd(char *string, int file_descriptor)
// {
// 	if (file_descriptor >= 0x0)
// 		while (*string)
// 			write(file_descriptor, string++, sizeof(char));
// }

// static	size_t	ft_strlen(char *string)
// {
// 	const char	*last_char_string_pointer;

// 	last_char_string_pointer = string;
// 	if (!string)
// 		return (0x0);
// 	while (*last_char_string_pointer != '\0')
// 		last_char_string_pointer++;
// 	return (last_char_string_pointer - string);
// }

// void	ft_wd_match(char *first, char *second)
// {
// 	size_t	idx_first;
// 	size_t	idx_second;

// 	idx_first = 0x0;
// 	idx_second = 0x0;
// 	while (second[idx_second] != '\0')
// 	{
// 		if (first[idx_first] == second[idx_second])
// 			idx_first++;
// 		idx_second++;
// 	}
// 	if (idx_first == ft_strlen(first))
// 		ft_putstr_fd(first, STDOUT_FILENO);
// }

// int	main(int argc, char **argv)
// {
// 	if (argc == 0x3)
// 		ft_wd_match(argv[0x1], argv[0x2]);
// 	ft_putstr_fd("\n", STDOUT_FILENO);
// 	return (EXIT_SUCCESS);

/*
#include <unistd.h> // For write

void wdmatch(char *s1, char *s2)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (s1[len])
		++len;
	while (*s2 && i < len)
		(*s2++ == s1[i]) ? ++i : 0;
	if (i == len)
		write(1, s1, len);
}

int main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
*/
