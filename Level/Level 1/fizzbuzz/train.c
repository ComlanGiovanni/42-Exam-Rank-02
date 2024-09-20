/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:42:58 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 14:05:00 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write && STDOUT_FILENO
#include <stdlib.h> // EXIT_SUCCESS

static void	ft_putchar_fd(char character, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static void	ft_putstr_fd(char *string, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		while (*string)
			write(file_descriptor, string++, sizeof(char));
}

static void	ft_small_put_nbr_fd(int number, int file_descriptor)
{
	if (number > 0x9)
	{
		ft_small_put_nbr_fd((number / 0xa), file_descriptor);
		ft_small_put_nbr_fd((number % 0xa), file_descriptor);
	}
	else
		ft_putchar_fd(number + '0', file_descriptor);
}

static void	ft_fizz_buzz(int start, int end)
{
	while (start <= end)
	{
		if (((start % 0x3) == 0x0) && ((start % 0x5) == 0x0))
			ft_putstr_fd("fizzbuzz", STDOUT_FILENO);
		else if ((start % 0x3) == 0x0)
			ft_putstr_fd("fizz", STDOUT_FILENO);
		else if ((start % 0x5) == 0x0)
			ft_putstr_fd("buzz", STDOUT_FILENO);
		else
			ft_small_put_nbr_fd(start, STDOUT_FILENO);
		ft_putchar_fd('\n', STDOUT_FILENO);
		start++;
	}
}

int	main(void)
{
	ft_fizz_buzz(0x1, 100);
	return (EXIT_SUCCESS);
}
