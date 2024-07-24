/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 21:16:41 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/23 21:16:44 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write
#include <stdlib.h> // EXIT_SUCCESS

static void	ft_camel_to_snake(char *str);
static int	ft_isupper(int c);
static void	ft_putchar_fd(char character,	int file_descriptor);
static int	ft_tolower(int c);

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_camel_to_snake(argv[1]);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

static void	ft_camel_to_snake(char *str)
{
	while (*str)
	{
		if (ft_isupper(*str))
		{
			ft_putchar_fd('_', STDOUT_FILENO);
			*str = ft_tolower(*str);
		}
		ft_putchar_fd(*str, STDOUT_FILENO);
		str++;
	}
}

static int	ft_isupper(int c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

static void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c += ('a' - 'A');
	return (c);
}

// #include <unistd.h> // For write

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	camel_to_snake(char *str)
// {
// 	int	idx;

// 	idx = 0;
// 	while (str[idx] != '\0')
// 	{
// 		if (str[idx] >= 'A' && str[idx] <= 'Z')
// 		{
// 			ft_putchar('_');
// 			str[idx] += ' ';
// 		}
// 		ft_putchar(str[idx]);
// 		idx++;
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		camel_to_snake(argv[1]);
// 	ft_putchar('\n');
// 	return (0);
// }
