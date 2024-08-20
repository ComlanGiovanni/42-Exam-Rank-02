/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:59:52 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 15:11:29 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // EXIT_SUCCESS
#include <unistd.h> // write STDOUT_FILENO

static size_t	ft_strlen(char *string)
{
	const char	*pointer_of_last_char;

	pointer_of_last_char = string;
	if (!string)
		return (0x0);
	while (*pointer_of_last_char != '\0')
		pointer_of_last_char++;
	return (pointer_of_last_char - string);
}

static void	ft_putchar_fd(char character, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static void	ft_rev_print(char *str)
{
	size_t	length;

	length = ft_strlen(str);
	while (length > 0x0)
	{
		ft_putchar_fd(str[length - 0x1], STDOUT_FILENO);
		length--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_rev_print(argv[0x1]);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
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
