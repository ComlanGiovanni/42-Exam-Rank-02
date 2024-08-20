/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:08:55 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 14:09:55 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write && STDOUT_FILENO

static void	ft_putstr_fd(char *string, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		while (*string)
			write(file_descriptor, string++, sizeof(char));
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
// 			//ft_putchar('\n');
// 			argc--;
// 			index++;
// 		}
// 	}
// 	ft_putstr(NULL);
// 	return (0x0);
// }
