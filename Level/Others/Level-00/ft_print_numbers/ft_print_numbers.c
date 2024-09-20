/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:51:12 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/21 23:46:21 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdlib.h> // EXIT_SUCCESS

static	void	ft_putchar_fd(char character, int file_descriptor);
static	void	ft_print_range(int start, int end, int step);

int	main(void)
{
	ft_print_range(0x0, 0x9, 0x1);
	return (EXIT_SUCCESS);
}

static	void	ft_putchar_fd(char character, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static	void	ft_print_range(int start, int end, int step)
{
	while (start < end)
	{
		ft_putchar_fd((start + '0'), STDOUT_FILENO);
		start += step;
	}
	ft_putchar_fd((start + '0'), STDOUT_FILENO);
}

// static void	ft_print_range_recursive(int digit, int end, int step)
// {
// 	if (digit == end + step)
// 		return ;
// 	ft_putchar_fd((digit + '0'), STDOUT_FILENO);
// 	ft_print_range_recursive(digit + step, end, step);
// }

// #include <unistd.h>

// void ft_putchar(char c)
// {
//     write(1, &c, 1);
// }

// void	ft_print_numbers(void)
// {
//     int digit;

//     digit = 0;

//     while (digit <= 9)
//     {
//         ft_putchar(digit + '0');
//         digit++;
//     }
// }

// int main(void)
// {
//     ft_print_numbers();
//     //write(1,"0123456789", 10);
//     return (0);
// }
