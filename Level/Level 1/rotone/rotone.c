/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:17:24 by gcomlan           #+#    #+#             */
/*   Updated: 2024/07/22 14:33:57 by gicomlan         ###   ########.fr       */
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

/*		Other short or long way to do

#include <unistd.h> // For write

void	ft_putchar(char *c)
{
	write(1, &c, 1);
}

void	ft_rot_one(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if ((str[idx] >= 'A') && (str[idx] <= 'Y')
			|| (str[idx] >= 'a') && (str[idx] <= 'y'))
			str[idx] += 1;
		else if (str[idx] == 'Z' || str[idx] == 'z')
			str[idx] -= 25;
		ft_putchar(str[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rot_one(argv[1]);
	return (0);
}
*/
