/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 19:50:23 by gcomlan           #+#    #+#             */
/*   Updated: 2024/07/15 20:21:52 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, sizeof(char));
}

int	ft_islower(char c)
{
	return ((c >= 'a') && (c <= 'z'));
}

int	ft_isupper(char c)
{
	return ((c >= 'A') && (c <= 'Z'));
}


void	ulstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (ft_islower(str[index]))
			str[index] -= ('a' - 'A');
		else if (ft_isupper(str[index]))
			str[index] += ('a' - 'A');
		ft_putchar(str[index]);
		index++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv[1]);
	ft_putchar('\n');
	return (EXIT_SUCCESS);
}
