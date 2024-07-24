/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:24:41 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/24 10:25:53 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write

static void	ft_union(char *str_1, char *str_2);
static void	ft_fill_ascii(int *ascii_tab, int length);
static void	ft_print_seen_character(int *ascii, char *str);
static void	ft_putchar_fd(char character,	int file_descriptor);

int	main(int argc, char **argv)
{
	if (argc == 0x3)
		ft_union(argv[0x1], argv[0x2]);
	ft_putchar_fd('\n', STDOUT_FILENO);
}

static void	ft_union(char *str_1, char *str_2)
{
	int		ascii[256];

	ft_fill_ascii(ascii, 256);
	ft_print_seen_character(ascii, str_1);
	ft_print_seen_character(ascii, str_2);
}

static void	ft_fill_ascii(int *ascii_tab, int length)
{
	int		index;

	index = 0x0;
	while (index <= length)
	{
		ascii_tab[index] = 0x0;
		index++;
	}
}

static void	ft_print_seen_character(int *ascii, char *str)
{
	while (*str)
	{
		if (ascii[(int)*str] == 0x0)
		{
			ft_putchar_fd(str, STDOUT_FILENO);
			ascii[(int)*str] = 0x1;
		}
		str++;
	}
}

static void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}
