/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 22:05:47 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/21 23:43:23 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdlib.h> // EXIT_SUCCESS

static	void	ft_putchar_fd(char character, int file_descriptor);
static	void	ft_putstr_fd(char *string, int file_descriptor);

int	main(int argc, char **argv)
{
	if (argc > 0x1)
		ft_putstr_fd(argv[0x1], STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

static	void	ft_putchar_fd(char character, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static	void	ft_putstr_fd(char *string, int file_descriptor)
{
	if (string == NULL)
		string = "(null)";
	if (file_descriptor >= 0x0)
		while (*string)
			write(file_descriptor, string++, sizeof(char));
}
