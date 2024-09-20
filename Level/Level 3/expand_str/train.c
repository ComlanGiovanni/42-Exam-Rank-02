/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:44:39 by gcomlan           #+#    #+#             */
/*   Updated: 2024/07/25 11:09:16 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write
#include <stdlib.h>

static void	ft_putchar_fd(char character,	int file_descriptor);
static int	ft_isspace(int c);
static void	ft_epur_str(char *str);

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_epur_str(argv[1]);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

static void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static int	ft_isspace(int c)
{
	return ((c == ' ') || ((c >= '\t') && (c <= '\r')));
}

static void	ft_put_many_char(char character, int number_of_print)
{
	while (number_of_print--)
		ft_putchar_fd(character, STDOUT_FILENO);
}

static void	ft_epur_str(char *str)
{
	while (ft_isspace(*str))
		str++;
	while (*str)
	{
		if (ft_isspace(*str))
		{
			if (*(str + 0x1) > ' ' && *(str + 0x1) != '\0')
				ft_put_many_char(' ', 0x3);
		}
		else if (!ft_isspace(*str))
			ft_putchar_fd(*str, STDOUT_FILENO);
		str++;
	}
}
// static void	ft_putstr_fd(char *string, int file_descriptor)
// {
// 	if (file_descriptor >= 0x0)
// 		while (*string)
// 			ft_putchar_fd(*string++, STDOUT_FILENO);
// }

// static void	ft_epur_str(char *str)
// {
// 	while (ft_isspace(*str))
// 		str++;
// 	while (*str)
// 	{
// 		if (ft_isspace(*str))
// 		{
// 			if (*(str + 0x1) > ' ' && *(str + 0x1) != '\0')
// 				//ft_putstr_fd("   ", STDOUT_FILENO);
// 		}
// 		else if (!ft_isspace(*str))
// 			ft_putchar_fd(*str, STDOUT_FILENO);
// 		str++;
// 	}
// }
