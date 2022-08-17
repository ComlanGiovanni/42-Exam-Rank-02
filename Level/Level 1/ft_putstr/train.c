/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:40:07 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 17:20:21 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	idx;

	if (str == ((void *) 0))
		return ;
	idx = 0;
	while (str[idx] != '\0')
	{
		ft_putchar(str[idx]);
		idx++;
	}
}

/*		MAIN Test

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		while (argc > 0)
		{
			ft_putstr(argv[argc - 1]);
			ft_putchar(10);
			argc--;
		}
	}
	ft_putstr(NULL);
	return (0);
}

*/
