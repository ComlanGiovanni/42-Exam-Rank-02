/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:27:19 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 15:28:34 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write STDOUT_FILENO
#include <stdlib.h> // EXIT_SUCCESS

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

static void	ft_rot(char *str, int rotation)
{
	while (*str)
	{
		if (ft_islower(*str))
			*str = ('a' + ((*str - 'a') + rotation) % 0x1a);
		else if (ft_isupper(*str))
			*str = ('A' + ((*str - 'A') + rotation) % 0x1a);
		ft_putchar_fd(*str, STDOUT_FILENO);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	rotation;

	rotation = 0x1;
	if (argc == 0x2)
		ft_rot(argv[0x1], rotation);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
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
