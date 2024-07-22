/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:03:58 by gcomlan           #+#    #+#             */
/*   Updated: 2024/07/22 14:34:11 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write
#include <stdlib.h>

static void		ft_rot(char *str, int rotation);
static int		ft_isupper(int c);
static void		ft_putchar_fd(char c, int fd);

int	main(int argc, char **argv)
{
	int	rotation;

	rotation = 1;
	if (argc == 0x2)
		ft_rot(argv[0x1], rotation);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

static void	ft_rot(char *str, int rotation)
{
	while (*str)
	{
		if (ft_islower(*str))
			*str = ('a' + ((*str - 'a') + rotation) % 26);
		else if (ft_isupper(*str))
			*str = ('A' + ((*str - 'A') + rotation) % 26);
		ft_putchar_fd(*str, STDOUT_FILENO);
		str++;
	}
}

static int	ft_islower(int c)
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

// #include <unistd.h> // For write

// int	ft_islower(int c)
// {
// 	return ((c >= 'a') && (c <= 'z'));
// }

// int	ft_isupper(int c)
// {
// 	return ((c >= 'A') && (c <= 'Z'));
// }

// void	rotation(char *str, int shift)
// {
// 	while (*str)
// 	{
// 		if (ft_islower(*str))
// 			*str = ((((*str - 'a') + shift) % 26) + 'a');
// 		else if (ft_isupper(*str))
// 			*str = ((((*str - 'A') + shift) % 26) + 'A');
// 		write(1, str, 1);
// 		str++;
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		rotation(argv[1], 1);
// 	write(1, "\n", 1);
// 	return (0);
// }
