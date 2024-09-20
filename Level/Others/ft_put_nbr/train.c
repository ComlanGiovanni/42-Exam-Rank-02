/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:04:40 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/24 13:24:32 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write STDOUT_FILENO

static void	ft_putnbr_fd_recursive(long nbr, int fd);
static void	ft_putchar_fd(char character,	int file_descriptor);
static void	ft_putnbr_fd(int n, int fd);

static void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (fd < 0)
		return ;
	ft_putnbr_fd_recursive(nbr, fd);
}

static void	ft_putnbr_fd_recursive(long nbr, int fd)
{
	if (nbr < 0 && nbr)
	{
		ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	if (nbr < 10)
		ft_putchar_fd((nbr + '0'), fd);
	else
	{
		ft_putnbr_fd((nbr / 10), fd);
		ft_putnbr_fd((nbr % 10), fd);
	}
}


void	ft_putnbr(int n)
{
	ft_putnbr_fd(n, STDOUT_FILENO);
}

#include <stdlib.h>

int	main(void)
{
	ft_putnbr(42);
	return (EXIT_SUCCESS);
}
