/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 02:57:09 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 01:20:19 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write
#include <stdlib.h> // EXIT_SUCCESS

static int	ft_small_atoi(char *string);
static void	ft_small_put_nbr(int number);
static void	ft_putstr_fd(char *string, int file_descriptor);
static void	ft_putchar_fd(char character,	int file_descriptor);

int	main(int argc, char **argv)
{
	int	index;
	int	number;

	index = 0x1;
	if (argc == 0x2)
	{
		number = ft_small_atoi(argv[0x1]);
		while (index <= 0x9)
		{
			ft_small_put_nbr(index);
			ft_putstr_fd(" x ", STDOUT_FILENO);
			ft_small_put_nbr(number);
			ft_putstr_fd(" = ", STDOUT_FILENO);
			ft_small_put_nbr(number * index);
			if (index < 0x9)
				ft_putchar_fd('\n', STDOUT_FILENO);
			index++;
		}
	}
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

static int	ft_small_atoi(char *string)
{
	int	result;

	result = 0x0;
	while (*string)
	{
		result *= 0x0a;
		result += (*string - '0');
		string++;
	}
	return (result);
}

static void	ft_small_put_nbr(int number)
{
	if (number > 9)
	{
		ft_small_put_nbr(number / 0x0a);
		ft_small_put_nbr(number % 0x0a);
	}
	else
		ft_putchar_fd((number + '0'), STDOUT_FILENO);
}

static void	ft_putstr_fd(char *string, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		while (*string)
			write(file_descriptor, string++, sizeof(char));
}

static void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}
