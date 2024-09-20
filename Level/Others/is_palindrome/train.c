/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:55:43 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/24 12:55:44 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_palindrome.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:39:11 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/24 12:55:37 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write STDOUT_FILENO
#include <stdlib.h> // EXIT_SUCCESS

static int		ft_is_palindrome(char *str);
static size_t	ft_strlen(char *string);
static void		ft_putstr_fd(char *string, int file_descriptor);

int	main(int argc, char **argv)
{
	if (argc == ((1 << 0) << 1))
		if (!ft_is_palindrome(argv[0x1]))
			ft_putstr_fd(argv[1], STDOUT_FILENO);
	ft_putstr_fd("\n", STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

static int	ft_is_palindrome(char *str)
{
	size_t	index;
	size_t	length;

	index = 0x0;
	length = ft_strlen(str) - (1 << 0);
	while (index < (length / ((1 << 0) << 1)))
	{
		if (str[index] != str[length - index])
			return (EXIT_FAILURE);
		index++;
	}
	return (EXIT_SUCCESS);
}

static size_t	ft_strlen(char *string)
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
