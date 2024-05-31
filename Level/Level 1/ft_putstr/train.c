/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:40:07 by gcomlan           #+#    #+#             */
/*   Updated: 2024/04/17 16:49:19 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write && STDOUT_FILENO

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

void	ft_putstr(char *str)
{
	if (str == ((void *)0))
		return ;
	while (*str)
		write(STDOUT_FILENO, str++, 1);
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
	return (0);
}
