/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:54:42 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/21 23:52:37 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdlib.h> // EXIT_SUCCESS

static void	ft_putchar_fd(char character, int file_descriptor);

int	main(void)
{
	char	character_to_display;

	character_to_display = 'a';
	ft_putchar_fd(character_to_display, STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

static void	ft_putchar_fd(char character, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

/*
#include <unistd.h>
#include <stdlib.h>

//write(1, "a",1);
static void	ft_putchar_fd(char character, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static void	ft_putstr_fd(char *string,	int file_descriptor)
{
	if (string == NULL)
		string = "(null)";
	while (*string)
		write(file_descriptor, string++, sizeof(char));
}

int		main(void)
{
	ft_putchar_fd('a', STDOUT_FILENO);
	//ft_putstr_fd("a", STDOUT_FILENO);
	return (EXIT_SUCCESS);
}
*/
