/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:34:14 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/21 23:54:15 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdlib.h> // EXIT_SUCCESS

static void	ft_putchar_fd(char character, int file_descriptor);

int	main(void)
{
	char	character_to_display;

	character_to_display = 'z';
	ft_putchar_fd(character_to_display, STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

static void	ft_putchar_fd(char character, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}
