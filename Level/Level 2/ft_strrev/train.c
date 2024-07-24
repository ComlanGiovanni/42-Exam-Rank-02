/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:46:15 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/23 23:15:20 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write
#include <stdlib.h> // EXIT_SUCCESS

static void	ft_putstr_fd(char *string, int file_descriptor);
static char	*ft_strrev(char *str);
static	size_t	ft_strlen(char *string);
static void	ft_swap_char(char *char_1, char *char_2);

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_putstr_fd(ft_strrev(argv[0x1]), STDOUT_FILENO);
	ft_putstr_fd("\n", STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

static void	ft_putstr_fd(char *string, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		while (*string)
			write (file_descriptor, string++, sizeof(char));
}

static char	*ft_strrev(char *str)
{
	size_t	idx;
	size_t	len;

	idx = 0x0;
	len = ft_strlen(str) - 0x1;
	while (idx < len)
	{
		ft_swap_char(&str[idx], &str[len]);
		idx++;
		len--;
	}
	return (str);
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

static void	ft_swap_char(char *char_1, char *char_2)
{
	char	tmp;

	tmp = *char_1;
	*char_1 = *char_2;
	*char_2 = tmp;
}
