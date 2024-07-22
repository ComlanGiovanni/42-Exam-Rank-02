/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 23:48:01 by gcomlan           #+#    #+#             */
/*   Updated: 2024/07/22 01:59:07 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write && STDOUT_FILENO
#include <stdlib.h> // EXIT_SUCCESS

static void	ft_fizzbuzz(int start, int end);
static void	ft_putstr_fd(char *string, int file_descriptor);
static void	ft_small_put_nbr(int number);
static void	ft_putchar_fd(char character, int file_descriptor);

int	main(void)
{
	fizzbuzz(0x1, 100);
	return (EXIT_SUCCESS);
}

static void	ft_fizzbuzz(int start, int end)
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
			ft_small_put_nbr(start);
		ft_putchar_fd('\n', STDOUT_FILENO);
		start++;
	}
}

static void	ft_putstr_fd(char *string, int file_descriptor)
{
	if (string == NULL)
		string = "(null)";
	if (file_descriptor >= 0x0)
		while (*string)
			ft_putchar_fd(*string++, STDOUT_FILENO);
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

static void	ft_putchar_fd(char character, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write (file_descriptor, &character, sizeof(char));
}
