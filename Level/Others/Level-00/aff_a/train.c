/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:28:27 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/22 00:05:14 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdlib.h> // EXIT_SUCCESS

static void	ft_putchar_fd(char character,	int file_descriptor);
static void	ft_aff_a(char *str);

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_aff_a(argv[0x1]);
	else
		ft_putchar_fd('a', STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

static void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static void	ft_aff_a(char *string)
{
	while (*string)
	{
		if (*string == 'a')
		{
			ft_putchar_fd(*string, STDOUT_FILENO);
			return ;
		}
		string++;
	}
}

// static void	ft_aff_a(char *str)
// {
// 	size_t	index;

// 	index = 0x0;
// 	while (str[index] != '\0')
// 	{
// 		if (str[index] == 'a')
// 		{
// 			ft_putchar_fd(str[index], STDOUT_FILENO);
// 			return ;
// 		}
// 		index++;
// 	}
// }
