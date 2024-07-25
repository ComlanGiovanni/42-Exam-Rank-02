/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:12:55 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/21 23:44:08 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdlib.h> // EXIT_SUCCESS

static void	ft_putstr_fd(char *string, int file_descriptor);

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	ft_putstr_fd("z\n", STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

static void	ft_putstr_fd(char *string, int file_descriptor)
{
	if (string == NULL)
		string = "(null)";
	if (file_descriptor >= 0x0)
		while (*string)
			write (file_descriptor, string++, sizeof(char));
}

/*

void	ft_putchar(char c)
{
	write (STDOUT_FILENO, &c, sizeof(char));
}

static void	ft_putstr_fd(char *string, int file_descriptor)
{
	if (string == NULL)
		string = "(null)";
	if (file_descriptor >= 0x0)
		while (*string)
			write (file_descriptor, string++, sizeof(char));
}

void	ft_aff_a(char *str)
{
	while (*str)
	{
		if (*str == 'z')
		{
			ft_putstr_fd("z\n", STDOUT_FILENO);
			return ;
		}
		str++;
	}
	ft_putstr_fd("z\n", STDOUT_FILENO);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_aff_a(argv[1]);
	else
		ft_putstr_fd("z\n", STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

// ||

void	ft_putstr(char *str)
{
	while (*str)
		write (STDOUT_FILENO, str++, sizeof(char));
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	ft_putstr("z\n");
	return (EXIT_SUCCESS);
}

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (STDOUT_FILENO, &c, sizeof(char));
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	ft_putstr("z\n");
	return (EXIT_SUCCESS);
}

// ||

int main(int argc, char **argv)
{
    (void )argc;
    (void )argv;
    write(1, "z\n", 2);
    return (0);
}
*/
