/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:29:39 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 16:56:21 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write STDOUT_FILENO
#include <stdlib.h> // For exit && EXIT_SUCCESS

static void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static void	ft_search_and_replace(char *string, char search, char replace)
{
	while (*string)
	{
		if (*string == search)
			ft_putchar_fd(replace, STDOUT_FILENO);
		else
			ft_putchar_fd(*string, STDOUT_FILENO);
		string++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 0x4)
	{
		if (argv[0x2][0x1] == '\0' && argv[0x3][0x1] == '\0')
			ft_search_and_replace(argv[0x1], argv[0x2][0x0], argv[3][0x0]);
	}
	return (EXIT_SUCCESS);
}

// #include <unistd.h> // For write
// #include <stdlib.h> // For exit && EXIT_SUCCESS
//
// void	ft_putchar(char c)
// {
// 	write(STDOUT_FILENO, &c, sizeof(char));
// }
//
// void	search_and_replace(char *string, char search, char replace)
// {
// 	int	index;
//
// 	index = 0;
// 	while (string[index] != '\0')
// 	{
// 		if (string[index] == search)
// 			ft_putchar(replace);
// 		else
// 			ft_putchar(string[index]);
// 		index++;
// 	}
// }
//
// int	main(int argc, char **argv)
// {
// 	if (argc == 4)
// 		if (argv[2][1] == '\0' && argv[3][1] == '\0')
// 			search_and_replace(argv[1], argv[2][0], argv[3][0]);
// 	return (EXIT_SUCCESS);
// }
