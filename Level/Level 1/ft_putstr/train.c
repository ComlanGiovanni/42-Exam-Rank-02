/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:40:07 by gcomlan           #+#    #+#             */
/*   Updated: 2024/07/22 02:07:18 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write && STDOUT_FILENO

static void	ft_putstr_fd(char *string, int file_descriptor)
{
	if (string == NULL)//WARNING IN EXAM
		string = "(null)";
	if (file_descriptor >= 0x0)
		while (*string)
			ft_putchar_fd(*string++, STDOUT_FILENO);
}

void	ft_putstr(char *str)
{
	ft_putstr_fd(str, STDOUT_FILENO);
}

// int	main(int argc, char **argv)
// {
// 	int	index;

// 	index = 0;
// 	if (argc > 1)
// 	{
// 		while (argc > 0)
// 		{
// 			ft_putstr(argv[index]);
// 			ft_putchar('\n');
// 			argc--;
// 			index++;
// 		}
// 	}
// 	ft_putstr(NULL);
// 	return (0x0);
// }
