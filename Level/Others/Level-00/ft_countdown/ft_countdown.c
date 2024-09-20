/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:13:59 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/21 23:55:13 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdlib.h> // EXIT_SUCCESS

static	void	ft_putchar_fd(char character,	int file_descriptor);
static	void	ft_print_range_recursive(int digit, int end, int step);

int	main(void)
{
	ft_print_range_recursive(0x9, 0x0, -1);
	return (EXIT_SUCCESS);
}

static	void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write (file_descriptor, &character, sizeof(char));
}

static	void	ft_print_range_recursive(int digit, int end, int step)
{
	if (digit == end + step)
		return ;
	ft_putchar_fd((digit + '0'), STDOUT_FILENO);
	ft_print_range_recursive(digit + step, end, step);
}

// static void	ft_print_range(int start, int end, int step)
// {
// 	while (start != end)
// 	{
// 		ft_putchar_fd((start + '0'), STDOUT_FILENO);
// 		start += step;
// 	}
// 	ft_putchar_fd((start + '0'), STDOUT_FILENO);
// }

// #include <unistd.h>

// void ft_putchar(char c)
// {
//     write(1, &c, 1);
// }

// void ft_countdown(void)
// {
//     int digit;

//     digit = 9;
//     while (digit >= 0)
//     {
//         ft_putchar(digit + '0');
//         digit--;
//     }
// }

// int main (void)
// {
//     ft_countdown();
//     ft_putchar('\n');
//     //write(1, "9876543210\n", 11);
//     return (0);
// }

/*
#include <unistd.h>
#include <stdlib.h>

static	void	ft_putstr_fd(char *string,	int file_descriptor)
{
	if (string == NULL)
		string = "(null)";
	if (file_descriptor >= 0)
		while (*string)
			write (file_descriptor, string++, sizeof(char));
}

int	main(void)
{
	char	*string_to_display;

	string_to_display = "9876543210\n";
	ft_putstr_fd(string_to_display, STDOUT_FILENO);
	ft_putstr_fd("\n", STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

static void	ft_countdown_recursive(int digit)
{
	if (digit < 0)
		return ;
	ft_putchar_fd((digit + '0'), STDOUT_FILENO);
	ft_countdown_recursive(digit - 1);
}

static void	ft_countdown_recursive(int digit)
{
	if (digit > 9)
		return ;
	ft_putchar_fd((digit + '0'), STDOUT_FILENO);
	ft_countdown_recursive(digit + 1);
}
*/
