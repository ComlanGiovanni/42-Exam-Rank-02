/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   even.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:36:44 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/24 13:46:29 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static void	ft_display_even(int start, int end);
static void	ft_small_put_nbr(int number);
static void	ft_putchar_fd(char c, int fd);

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int	start;
	int	end;

	start = 0;
	end = 10;
	ft_display_even(start, end);
	return (EXIT_SUCCESS);
}

static void	ft_display_even(int start, int end)
{
	while (start++ <= end)
		if (!(start % 2))
			ft_small_put_nbr(start);
}


static void	ft_small_put_nbr(int number)
{
	if (number > 9)
	{
		ft_small_put_nbr(number / 10);
		ft_small_put_nbr(number % 10);
	}
	else
		ft_putchar_fd((number + '0'), STDOUT_FILENO);
}

static void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write(fd, &c, sizeof(char));
}
