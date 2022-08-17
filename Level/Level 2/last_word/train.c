/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:44:39 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 16:53:23 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

void	last_word(char *str)
{
	int	idx;

	idx = ft_strlen(str) - 1;
	while (str[idx] == ' ' || str[idx] == '\t')
		idx--;
	while (str[idx] != '\0' && (str[idx] != ' ' && str[idx] != '\t'))
		idx--;
	idx++;
	while (str[idx] != '\0' && str[idx] != ' ' && str[idx] != '\t')
	{
		ft_putchar(str[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	last_word(argv[1]);
	return (0);
}

/*
#include <unistd.h> // For write

int		main(int ac, char **av)
{
	int i;
	char *lw;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] <= 32 && av[1][i + 1] > 32)
				lw = &av[1][i + 1];
			i++;
		}
		i = 0;
		while (lw && lw[i] > 32)
		{
			write(1, &lw[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
*/
