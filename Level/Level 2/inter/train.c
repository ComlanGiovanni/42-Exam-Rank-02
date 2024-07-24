/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:22:17 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/24 08:45:24 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static void	ft_inter(char *str_1, char *str_2);
static void	ft_mark_char_in_ascii_tab(int *ascii, char *str);
static void	ft_print_common_characters(int *ascii, char *str);
static void	ft_fill_ascii(int *ascii_tab, int length);

int	main(int argc, char **argv)
{
	if (argc == 0x3)
		ft_inter(argv[0x1], argv[0x2]);
	write(STDOUT_FILENO, "\n", sizeof(char));
	return (EXIT_SUCCESS);
}

static void	ft_inter(char *str_1, char *str_2)
{
	int		ascii[256];

	ft_fill_ascii(ascii, 256);
	ft_mark_char_in_ascii_tab(ascii, str_2);
	ft_print_common_characters(ascii, str_1);
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

static void	ft_mark_char_in_ascii_tab(int *ascii, char *str)
{
	while (*str)
	{
		if (ascii[(int)*str] == 0x0)
			ascii[(int)*str] = 0x1;
		str++;
	}
}

static void	ft_print_common_characters(int *ascii, char *str)
{
	while (*str)
	{
		if (ascii[(int)*str] == 0x1)
		{
			write(STDOUT_FILENO, str, sizeof(char));
			ascii[(int)*str] = 0x0;
		}
		str++;
	}
}

// static void	ft_putchar_fd(char character,	int file_descriptor)
// {
// 	if (file_descriptor >= 0x0)
// 		write(file_descriptor, &character, sizeof(char));
// }

// static void	ft_small_put_nbr(int number)
// {
// 	if (number > 9)
// 	{
// 		ft_small_put_nbr(number / 10);
// 		ft_small_put_nbr(number % 10);
// 	}
// 	else
// 		ft_putchar_fd((number + '0'), STDOUT_FILENO);
// }

// static void	ft_putstr_fd(char *string, int file_descriptor)
// {
// 	if (file_descriptor >= 0x0)
// 		while (*string)
// 			write(file_descriptor, string++, sizeof(char));
// }

// static void	ft_print_int_table(int *tab, size_t length)
// {
// 	size_t	index;

// 	index = 0;
// 	while (index <= length)
// 	{
// 		ft_small_put_nbr(index);
// 		ft_putstr_fd(" -> ", STDOUT_FILENO);
// 		ft_putchar_fd((char)index, STDOUT_FILENO);
// 		ft_putstr_fd(" -> ", STDOUT_FILENO);
// 		ft_small_put_nbr(tab[index]);
// 		ft_putstr_fd("\n", STDOUT_FILENO);
// 		index++;
// 	}
// 	write (STDOUT_FILENO, "\n", sizeof(char));
// }
