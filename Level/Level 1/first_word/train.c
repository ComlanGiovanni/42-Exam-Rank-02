/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 00:46:01 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/23 01:51:13 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static void	ft_first_word(char *str);
static int	ft_isspace(int c);
static void	ft_putchar_fd(char c, int fd);

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_first_word(argv[0x1]);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

static void	ft_first_word(char *str)
{
	while (ft_isspace(*str))
		str++;
	while (*str && !ft_isspace(*str))
	{
		ft_putchar_fd(*str, STDOUT_FILENO);
		str++;
	}
}

static int	ft_isspace(int c)
{
	return ((c == ' ') || ((c >= '\t') && (c <= '\r')));
}

static void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0x0)
		write(fd, &c, sizeof(char));
}
