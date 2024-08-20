/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 00:46:01 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 13:41:18 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdlib.h> //EXIT_SUCCESS STDOUT_FILENO

static void	ft_putchar_fd(char character, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static int	ft_isspace(char character)
{
	return ((character == ' ') || ((character >= '\t') && (character <= '\r')));
}

static void	ft_first_word(char *string)
{
	while (ft_isspace(*string))
		string++;
	while (*string && !ft_isspace(*string))
		ft_putchar_fd(*string++, STDOUT_FILENO);
}

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_first_word(argv[0x1]);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}
