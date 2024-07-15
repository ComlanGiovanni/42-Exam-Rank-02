/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:16:51 by gcomlan           #+#    #+#             */
/*   Updated: 2024/07/11 23:22:01 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write
#include <stdlib.h> // For exit && EXIT_SUCCESS

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, sizeof(char));
}

void	search_and_replace(char *string, char search, char replace)
{
	int	index;

	index = 0;
	while (string[index] != '\0')
	{
		if (string[index] == search)
			ft_putchar(replace);
		else
			ft_putchar(string[index]);
		index++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		if (argv[2][1] == '\0' && argv[3][1] == '\0')
			search_and_replace(argv[1], argv[2][0], argv[3][0]);
	return (EXIT_SUCCESS);
}
