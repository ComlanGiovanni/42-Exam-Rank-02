/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 21:50:56 by gcomlan           #+#    #+#             */
/*   Updated: 2024/04/17 16:20:13 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isupper(int c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

int	ft_isalpha(int c)
{
	return (ft_isupper(c) && ((c >= 'a') && (c <= 'z')));
}

void	repeat(char letter, int repeat_count)
{
	while (repeat_count-- >= 0)
		write(STDOUT_FILENO, &letter, 1);
}

void	repeat_alpha(char *str)
{
	int	index;
	int	position;

	index = 0;
	position = 0;
	while (str[index] != '\0')
	{
		if (ft_isalpha(str[index]))
		{
			if (ft_isupper(str[index]))
				position = str[index] - 'A';
			else
				position = str[index] - 'a';
			repeat(str[index], position);
		}
		else
			write(STDOUT_FILENO, &str[index], 1);
		index++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(STDOUT_FILENO, "\n", 1);
	return (0);
}
