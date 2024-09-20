/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:28:01 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 14:55:40 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdlib.h> //EXIT_SUCCESS STDOUT_FILENO

static int	ft_isupper(char character)
{
	return ((character >= 'A') && (character <= 'Z'));
}

static int	ft_isalpha(char character)
{
	return (ft_isupper(character) \
		|| ((character >= 'a') && (character <= 'z')));
}

static void	ft_repeat(char alphabet, int repeat_count, int file_descriptor)
{
	while (repeat_count-- >= 0x0)
		write (file_descriptor, &alphabet, sizeof(char));
}

static void	ft_repeat_alpha(char *str)
{
	while (*str)
	{
		if (ft_isalpha(*str))
		{
			if (ft_isupper(*str))
				ft_repeat(*str, (*str - 'A'), STDOUT_FILENO);
			else
				ft_repeat(*str, (*str - 'a'), STDOUT_FILENO);
		}
		else
			write (STDOUT_FILENO, str, sizeof(char));
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_repeat_alpha(argv[0x1]);
	write(STDOUT_FILENO, "\n", sizeof(char));
	return (EXIT_SUCCESS);
}
