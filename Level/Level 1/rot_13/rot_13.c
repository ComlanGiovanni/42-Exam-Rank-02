/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:55:39 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 16:54:13 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write STDOUT_FILENO
#include <stdlib.h> // EXIT_SUCCESS

static int	ft_islower(int character)
{
	return ((character >= 'a') && (character <= 'z'));
}

static int	ft_isupper(int character)
{
	return ((character >= 'A') && (character <= 'Z'));
}

static void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
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

	rotation = 0xd;
	if (argc == 0x2)
		ft_rot(argv[0x1], rotation);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
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
