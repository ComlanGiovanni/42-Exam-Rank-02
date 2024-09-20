/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:09:37 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 18:29:15 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static int	ft_islower(char character)
{
	return ((character >= 'a') && (character <= 'z'));
}

static int	ft_toupper(int character)
{
	const int	case_difference = ('a' - 'A');

	if (ft_islower(character))
		character -= case_difference;
	return (character);
}

static void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static void	ft_snake_to_camel(char *str)
{
	while (*str)
	{
		if (*str == '_')
		{
			str++;
			*str = ft_toupper(*str);
		}
		ft_putchar_fd(*str, STDOUT_FILENO);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_snake_to_camel(argv[1]);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}
