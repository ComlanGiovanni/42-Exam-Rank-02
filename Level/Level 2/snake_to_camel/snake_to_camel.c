/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:09:30 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/24 10:11:21 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static void	ft_snake_to_camel(char *str);
static int	ft_toupper(int c);
static void	ft_putchar_fd(char character,	int file_descriptor);

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_snake_to_camel(argv[1]);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

static void	ft_snake_to_camel(char *str)
{
	while (*str)
	{
		if (*str == ' ')
		{
			str++;
			ft_toupper(*str);
		}
		ft_putchar_fd(*str, STDOUT_FILENO);
		str++;
	}
}

static int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		c -= ('a' - 'A');
	return (c);
}

static void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

// #include <unistd.h> // For write

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	snake_to_camel(char *str)
// {
// 	int	idx;

// 	idx = 0;
// 	while (str[idx] != '\0')
// 	{
// 		if (str[idx] == '_')
// 		{
// 			idx++;
// 			str[idx] -= ('a' - 'A');
// 		}
// 		ft_putchar(str[idx]);
// 		idx++;
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		snake_to_camel(argv[1]);
// 	write(1, "\n", 1);
// 	return (0);
// }

//str[idx] = str[idx] - ('a' - 'A'); or str[idx] -= ' ';
