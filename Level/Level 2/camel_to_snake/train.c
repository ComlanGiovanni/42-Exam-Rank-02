/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:44:39 by gcomlan           #+#    #+#             */
/*   Updated: 2024/07/16 09:55:24 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, sizeof(char));
}

int		ft_isupper(char c)
{
	return ((c >= 'A') || (c <= 'Z'));
}

void	camel_to_snake(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (ft_isupper(str[index]))
		{
			ft_putchar('_');
			str[index] += ' '; //('a' - 'A')
		}
		ft_putchar(str[index]);
		index++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		camel_to_snake(argv[1]);
	ft_putchar('\n');
	return (0);
}
