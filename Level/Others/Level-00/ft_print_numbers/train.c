/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 23:23:41 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/21 23:46:36 by gicomlan         ###   ########.fr       */
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
