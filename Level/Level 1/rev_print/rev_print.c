/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 00:07:47 by gcomlan           #+#    #+#             */
/*   Updated: 2024/07/22 12:26:24 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

static void		ft_rev_print(char *str);
static size_t	ft_strlen(char *string);
static void		ft_putchar_fd(char character, int file_descriptor);

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_rev_print(argv[1]);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

static void	ft_rev_print(char *str)
{
	size_t	index;

	index = ft_strlen(str);
	while (index > 0x0)
	{
		ft_putchar_fd(str[index - 0x1], STDOUT_FILENO);
		index--;
	}
}

static	size_t	ft_strlen(char *string)
{
	const char	*last_char_string_pointer;

	last_char_string_pointer = string;
	if (!string)
		return (0x0);
	while (*last_char_string_pointer != '\0')
		last_char_string_pointer++;
	return (last_char_string_pointer - string);
}

static void	ft_putchar_fd(char character, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write (file_descriptor, &character, sizeof(char));
}

/*


#include <unistd.h> // For write && STDOUT_FILENO

void	ft_put_character(char character)
{
	write(STDOUT_FILENO, &character, sizeof(char));
}

int	ft_string_length(char *string)
{
	return(string && *string ? ft_string_length(string + 1) + 1 : 0);
}

void	reverse_print(char *string)
{
	int		length;

	length = ft_string_length(string);
	while (length >= 0)
	{
		ft_put_character(string[length]);
		length--;
	}
}

int	main(int argument_count, char **argument_vector)
{
	if (argument_count == 2)
		reverse_print(argument_vector[1]);
	ft_put_character('\n');
	return (0x0);
}

//|
#include <unistd.h> // For write

int	main(int ac, char *av[])
{
	int	i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
			i += 1;
		while (i)
			write(1, &av[1][--i], 1);
	}
	write(1, "\n", 1);
	return (0);
}
*/
