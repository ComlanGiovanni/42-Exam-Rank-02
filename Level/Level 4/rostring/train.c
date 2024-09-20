/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:58:52 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/19 13:00:26 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write

static void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static int	ft_isspace(int c)
{
	return ((c == ' ') || ((c >= '\t') && (c <= '\r')));
}

void	ft_print_first_word(char *str, int begin_space)
{
	while (str[begin_space] != '\0' && !ft_isspace(str[begin_space]))
	{
		ft_putchar_fd(str[begin_space], STDOUT_FILENO);
		begin_space++;
	}
}

void	rostring(char *str)
{
	int	idx;
	int	begin_space;

	begin_space = 0;
	while (str[begin_space] != '\0' && ft_isspace(str[begin_space]))
		begin_space++;
	idx = begin_space;
	while (str[idx] != '\0' && !ft_isspace(str[idx]))
		idx++;
	while (str[idx] != '\0')
	{
		if (str[idx] != '\0' && !ft_isspace(str[idx]) && ft_isspace(str[idx - 1]))
		{
			while (str[idx] != '\0' && !ft_isspace(str[idx]))
			{
				ft_putchar_fd(str[idx], STDOUT_FILENO);
				idx++;
			}
			ft_putchar_fd(' ', STDOUT_FILENO);
		}
		idx++;
	}
	ft_print_first_word(str, begin_space);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		rostring(argv[1]);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (0);
}
