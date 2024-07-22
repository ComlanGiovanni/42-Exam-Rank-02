/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:55:39 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/22 14:34:27 by gicomlan         ###   ########.fr       */
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

	rotation = 13;
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

/*		Other short or long way to do


void	rotation(char *str, int shift)
{
	while (*str)
	{
		if ((*str >= 'a') && (*str <= 'z'))
			*str = ('a' + (((*str - 'a') + shift) % 26));
		else if ((*str >= 'A') && (*str <= 'Z'))
			*str = ('A' + (((*str - 'A') + shift) % 26));
		write(STDOUT_FILENO, *str, sizeof(char));
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rotation(argv[1], 13);
	write(STDOUT_FILENO, '\n', sizeof(char));
	return (EXIT_SUCCESS);
}

#include <unistd.h> // For write

void	ft_putchar_fd(char c)
{
	write(1, &c, 1);
}

void	rot_13(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if ((str[idx] >= 'A' && str[idx] <= 'M')
			|| (str[idx] >= 'a' && str[idx] <= 'm'))
			str[idx] += 13;
		else if ((str[idx] >= 'N' && str[idx] <= 'Z')
			|| (str[idx] >= 'n' && str[idx] <= 'z'))
			str[idx] -= 13;
		ft_putchar_fd(str[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rot_13(argv[1]);
	ft_putchar_fd("\n");
	return (0);
}
*/
