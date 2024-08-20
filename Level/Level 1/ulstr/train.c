/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.character                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:33:16 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 15:44:12 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // EXIT_SUCCESS
#include <unistd.h> // write STDOUT_FILENO

static int	ft_islower(char character)
{
	return ((character >= 'a') && (character <= 'z'));
}

static int	ft_isupper(int character)
{
	return ((character >= 'A') && (character <= 'Z'));
}

static void	ft_putchar_fd(char character, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write (file_descriptor, &character, sizeof(char));
}

static void	ft_ulstr(char *str)
{
	const int	case_difference = ('a' - 'A');

	while (*str)
	{
		if (ft_islower(*str))
			*str -= case_difference;
		else if (ft_isupper(*str))
			*str += case_difference;
		ft_putchar_fd(*str, STDOUT_FILENO);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_ulstr(argv[0x1]);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}
