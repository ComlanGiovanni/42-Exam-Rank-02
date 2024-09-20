/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:29:01 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/22 00:41:04 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdlib.h> // EXIT_SUCCESS

static void	ft_putendl_fd(char *string, int file_descriptor);
static void	ft_putstr_fd(char *string, int file_descriptor);
static void	ft_putchar_fd(char character, int file_descriptor);

int	main(void)
{
	char	*string_to_display;

	string_to_display = "Hello World!\n";
	ft_putendl_fd(string_to_display, STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

static	void	ft_putendl_fd(char *string, int file_descriptor)
{
	ft_putstr_fd(string, file_descriptor);
	ft_putchar_fd(0x0a, file_descriptor);
}

static void	ft_putchar_fd(char character, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write (file_descriptor, &character, sizeof(char));
}

static void	ft_putstr_fd(char *string, int file_descriptor)
{
	if (string == NULL)
		string = "(null)";
	if (file_descriptor >= 0x0)
		while (*string)
			ft_putchar_fd(*string++, STDOUT_FILENO);
}

// #include <unistd.h>
//
// void ft_putchar(char c)
// {
//     write(1, &c, 1);
// }
//
// void ft_putstr(char *str)
// {
//     while (*str)
//         write(1, str++, 1);
// }
//
// void ft_put_str(char *str)
// {
//     int idx;
//
//     idx = 0;
//
//     while (str[idx] != '\0')
//     {
//         ft_putchar(str[idx]);
//         idx++;
//     }
// }
//
// int ft_strlen(char *str)
// {
//     int length;
//
//     length = 0;
//
//     while (str[length] != '\0')
//         length++;
//     return (length);
// }
//
// int main (void)
// {
//     //char *hello;
//     //int len_hello;
//
//     //hello = "Hello World!\n";
//     //len_hello = 12;
//     //ft_put_str(hello);
//     //write(1, hello, len_hello);
//     //write(1, hello, ft_strlen(hello));
//     write(1, "Hello World!\n", 13);
//     //ft_putstr("Hello World!\n");
//     return (0);
// }
