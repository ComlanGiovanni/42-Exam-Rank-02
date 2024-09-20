/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:13:56 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/21 23:54:04 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdlib.h> // EXIT_SUCCESS

static void	ft_putchar_fd(char character, int file_descriptor);
static void	ft_print_range_recursive(int digit, int end, int step);

int	main(void)
{
	ft_print_range_recursive(0x0, 9, 0x1);
	return (EXIT_SUCCESS);
}

static void	ft_putchar_fd(char character, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write (file_descriptor, &character, sizeof(char));
}

static void	ft_print_range_recursive(int digit, int end, int step)
{
	if (digit == end + step)
		return ;
	ft_putchar_fd((digit + '0'), STDOUT_FILENO);
	ft_print_range_recursive((digit + step), end, step);
}
