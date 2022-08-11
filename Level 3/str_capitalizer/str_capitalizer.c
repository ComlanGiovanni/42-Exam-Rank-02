/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:41:00 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/09 18:48:25 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_capitalizer(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && 'z' >= str[i])
		str[i] -= 32;
	write(1, &str[i], 1);
	while (str[++i])
	{
		if (str[i] >= 'A' && 'Z' >= str[i])
			str[i] += 32;
		if ((str[i] >= 'a' && 'z' >= str[i]) && (str[i - 1] == ' ' || \
		str[i - 1] == '\t'))
			str[i] -= 32;
		write(1, &str[i], 1);
	}
}

int main(int argc, char *argv[])
{
	int i;

	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			write(1, "\n", 1);
			i += 1;
		}
	}
	return (0);
}

/*
#include <unistd.h>

int		ft_to_lower(char c, char d, int i)
{
	if (c != ' ' && c != '\t' && i != -1)
	{
		if (d >= 'A' && d <= 'Z')
			return (1);
	}
	return (0);
}

int		ft_to_upper(char c, char d)
{
	if (c == ' ' || c == '\t')
	{
		if (d >= 'a' && d <= 'z')
			return (1);
	}
	return (0);
}

int		main(int ac, char **av)
{
	int i;
	int i2;

	i = 0;
	if (ac > 1)
	{
		while (i < ac)
		{
			i++;
			i2 = 0;
			while (av[i][i2] != '\0')
			{
				if (av[i][0] >= 'a' && av[i][0] <= 'z')
					av[i][0] -= 32;
				else if (ft_to_lower(av[i][i2 - 1], av[i][i2], i2 - 1))
					av[i][i2] += 32;
				else if (ft_to_upper(av[i][i2 - 1], av[i][i2]))
					av[i][i2] -= 32;
				write(1, &av[i][i2], 1);
				i2++;
			}
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
*/
