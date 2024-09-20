/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 02:21:45 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 02:21:47 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write
#include <stdlib.h>

static void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
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

static size_t	ft_count_matching_char(char *first, char *second)
{
	size_t	idx_first;
	size_t	idx_second;

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

void	ft_hidenp(char *first, char *second)
{
	size_t	matching_chars;

	matching_chars = ft_count_matching_char(first, second);
	if (matching_chars == ft_strlen(first))
		ft_putchar('1');
	else
		ft_putchar('0');
}

int	main(int argc, char **argv)
{
	if (argc == 0x3)
		ft_hidenp(argv[0x1], argv[0x2]);
	ft_putchar('\n');
	return (EXIT_FAILURE);
}
