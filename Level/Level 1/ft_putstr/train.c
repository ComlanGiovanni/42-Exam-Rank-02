/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:40:07 by gcomlan           #+#    #+#             */
/*   Updated: 2024/07/12 12:01:35 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write && STDOUT_FILENO

void	ft_putstr(char *str)
{
	while (*str)
		write(STDOUT_FILENO, str++, sizeof(char));
}

int	main(int argc, char **argv)
{
	int	index;

	index = 0;
	if (argc > 1)
	{
		while (argc > 0)
		{
			ft_putstr(argv[index]);
			ft_putchar('\n');
			argc--;
			index++;
		}
	}
	ft_putstr(NULL);
	return (0x0);
}
