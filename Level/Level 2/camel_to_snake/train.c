/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 22:02:40 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 17:16:32 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write
#include <stdlib.h> // EXIT_SUCCESS

static int	ft_isupper(int character)
{
	return ((character >= 'A') && (character <= 'Z'));
}

static int	ft_tolower(int character)
{
	const int	case_difference = ('a' - 'A');

	if (ft_isupper(character))
		character += case_difference;
	return (character);
}

static void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static void	ft_camel_to_snake(char *str)
{
	while (*str)
	{
		if (ft_isupper(*str))
		{
			ft_putchar_fd('_', STDOUT_FILENO);
			*str = ft_tolower(*str);
		}
		ft_putchar_fd(*str, STDOUT_FILENO);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_camel_to_snake(argv[0x1]);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}
