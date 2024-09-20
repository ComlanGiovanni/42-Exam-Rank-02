/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 21:06:50 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 17:09:22 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write STDOUT_FILENO
#include <stdlib.h> // EXIT_SUCCESS

static int	ft_isupper(int character)
{
	return ((character >= 'A') && (character <= 'Z'));
}

static int	ft_islower(char character)
{
	return ((character >= 'a') && (character <= 'z'));
}

static void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static void	ft_alpha_mirror(char *str)
{
	while (*str)
	{
		if (ft_isupper(*str))
			*str = ('Z' - (*str - 'A'));
		else if (ft_islower(*str))
			*str = ('z' - (*str - 'a'));
		ft_putchar_fd(*str, STDOUT_FILENO);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_alpha_mirror(argv[0x1]);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}
