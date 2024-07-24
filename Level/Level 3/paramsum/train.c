/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:44:39 by gcomlan           #+#    #+#             */
/*   Updated: 2024/07/23 04:44:45 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write
#include <stdlib.h>

static void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static void	ft_small_put_nbr(int number)
{
	if (number > 0x9)
	{
		ft_small_put_nbr(number / 0x0a);
		ft_small_put_nbr(number % 0x0a);
	}
	else
		ft_putchar_fd((number + '0'), STDOUT_FILENO);
}

int	main(int argc, char **argv)
{
	(void)argv;
	ft_small_put_nbr(argc - 0x1);
	ft_putchar_fd((char)0x0a, STDOUT_FILENO);
	return (EXIT_SUCCESS);
}
