/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:33:16 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/22 14:33:18 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

static void	ft_ulstr(char *str);
static int	ft_islower(char c);
static int	ft_isupper(int c);
static void	ft_putchar_fd(char c, int fd);

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_ulstr(argv[0x1]);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

static void	ft_ulstr(char *str)
{
	while (*str != '\0')
	{
		if (ft_islower(*str))
			*str -= ('a' - 'A');
		else if (ft_isupper(*str))
			*str += ('a' - 'A');
		ft_putchar(*str, STDOUT_FILENO);
		str++;
	}
}

static int	ft_islower(char c)
{
	return ((c >= 'a') && (c <= 'z'));
}

static int	ft_isupper(int c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

static void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0x0)
		write (fd, &c, sizeof(char));
}
