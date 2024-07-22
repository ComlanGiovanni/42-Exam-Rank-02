/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 21:50:56 by gcomlan           #+#    #+#             */
/*   Updated: 2024/07/22 11:22:12 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static void	ft_repeat_alpha(char *str);
static int	ft_isalpha(int c);
static int	ft_isupper(int c);
static void	ft_repeat(char alphabet, int repeat_count);

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_repeat_alpha(argv[1]);
	write(STDOUT_FILENO, "\n", sizeof(char));
	return (EXIT_SUCCESS);
}

static void	ft_repeat_alpha(char *str)
{
	while (*str)
	{
		if (ft_isalpha(*str))
		{
			if (ft_isupper(*str))
				ft_repeat(*str, (*str - 'A'));
			else
				ft_repeat(*str, (*str - 'a'));
		}
		else
			write (STDOUT_FILENO, str, sizeof(char));
		str++;
	}
}

static int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ((c >= 'a') && (c <= 'z')));
}

static int	ft_isupper(int c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

static void	ft_repeat(char alphabet, int repeat_count)
{
	while (repeat_count-- >= 0x0)
		write (STDOUT_FILENO, &alphabet, sizeof(char));
}

// static void	ft_putchar_fd(char character, int file_descriptor)
// {
// 	if (file_descriptor >= 0x0)
// 		write (file_descriptor, &character, sizeof(char));
// }
