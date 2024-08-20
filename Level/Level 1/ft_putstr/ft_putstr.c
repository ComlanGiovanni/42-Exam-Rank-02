/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:08:52 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 14:09:16 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write && STDOUT_FILENO

static void	ft_putstr_fd(char *string, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		while (*string)
			write(file_descriptor, string++, sizeof(char));
}

void	ft_putstr(char *str)
{
	ft_putstr_fd(str, STDOUT_FILENO);
}

// #include <unistd.h> // For write && STDOUT_FILENO
//
// void	ft_putchar(char c)
// {
// 	write(STDOUT_FILENO, &c, sizeof(char));
// }
//
// void	ft_putstr(char *str)
// {
// 	int	idx;
//
// 	idx = 0;
// 	while (str[idx] != '\0')
// 	{
// 		ft_putchar(str[idx]);
// 		idx++;
// 	}
// }
//
// void	ft_putstr(char *str)
// {
// 	while (*str)
// 		write(STDOUT_FILENO, str++, sizeof(char));
// }

/*		Other short or long way to do

void	ft_putstr(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		write(1, &str[idx], 1);
		idx++;
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

#include <unistd.h> // For write

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

#include <unistd.h> // For write

void	ft_putstr(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
		write(1, &str[idx++], 1);
}

#include <unistd.h> // For write

void	ft_putstr(char *str)
{
	int	idx;

	idx = -1;
	while (str[idx++])
		write(1, &str[idx], 1);
}

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, sizeof(char));
}

void	ft_putstr(char *str)
{
	if (str == ((void *)0))
		return ;
	while (*str)
		write(STDOUT_FILENO, str++, sizeof(char));
}

*/
