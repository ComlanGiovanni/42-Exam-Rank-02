/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 22:42:15 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/22 00:33:43 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdlib.h> // EXIT_SUCCESS

static	void	ft_putendl_fd(char *string, int file_descriptor);
static	void	ft_putstr_fd(char *string, int file_descriptor);
static	void	ft_putchar_fd(char character, int file_descriptor);

int	main(int argc, char **argv)
{
	if (argc > 0x1)
	{
		argc--;
		ft_putendl_fd(argv[0x1], STDOUT_FILENO);
	}
	return (EXIT_SUCCESS);
}

static void	ft_putendl_fd(char *string, int file_descriptor)
{
	ft_putstr_fd(string, file_descriptor);
	ft_putchar_fd(0x0a, file_descriptor);
}

static	void	ft_putstr_fd(char *string, int file_descriptor)
{
	if (string == NULL)
		string = "(null)";
	if (file_descriptor >= 0x0)
		while (*string)
			write(file_descriptor, string++, sizeof(char));
}

static	void	ft_putchar_fd(char character, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}
