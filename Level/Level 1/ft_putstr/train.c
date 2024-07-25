/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:59:50 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 10:59:51 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write && STDOUT_FILENO

static void	ft_putstr_fd(char *string, int file_descriptor)
{
	if (string == NULL)
		string = "(null)";
	if (file_descriptor >= 0x0)
		while (*string)
			ft_putchar_fd(*string++, STDOUT_FILENO);
}

void	ft_putstr(char *str)
{
	ft_putstr_fd(str, STDOUT_FILENO);
}
// //WARNING IN EXAM FOR SECURE
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
