/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 02:26:37 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 02:29:30 by gicomlan         ###   ########.fr       */
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

static void	ft_epur_str(char *str)
{
	while (ft_isspace(*str))
		str++;
	while (*str)
	{
		if (ft_isspace(*str))
		{
			if (*(str + 0x1) > ' ' && *(str + 0x1) != '\0')
				ft_putchar_fd(' ', STDOUT_FILENO);
		}
		else if (!ft_isspace(*str))
			ft_putchar_fd(*str, STDOUT_FILENO);
		str++;
	}
}
