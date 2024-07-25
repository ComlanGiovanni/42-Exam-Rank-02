/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:04:32 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 11:03:45 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write
#include <stdlib.h>

static void		ft_last_word(char *str);
static size_t	ft_strlen(char *string);
static int		ft_isspace(int c);

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_last_word(argv[0x1]);
	return (EXIT_FAILURE);
}

static void	ft_last_word(char *str)
{
	size_t	idx;

	idx = ft_strlen(str) - 1;
	while (ft_isspace(str[idx]))
		idx--;
	while (str[idx] != '\0' && !ft_isspace(str[idx]))
		idx--;
	idx++;
	while (str[idx] != '\0' && !ft_isspace(str[idx]))
	{
		ft_putchar_fd(str[idx], STDOUT_FILENO);
		idx++;
	}
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

static int	ft_isspace(int c)
{
	return ((c == ' ') || ((c >= '\t') && (c <= '\r')));
}

static void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
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
