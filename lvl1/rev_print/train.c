/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 00:27:38 by gcomlan           #+#    #+#             */
/*   Updated: 2022/07/27 00:59:18 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	idx;

	idx = 0;

	if (argc == 2)
	{
		while (argv[1][idx])
			idx++;
		while (idx)
			write(1, &argv[1][--idx], 1);
	}
	return (0);
}

/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		ft_putchar(str[idx]);
		idx++;
	}
}

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

int	main(int argc, char **argv)
{
	int		idx;
	int		len;
	char	tmp;

	idx = 0;
	if (argc == 2)
	{
		len = ft_strlen(argv[1]);
		len--;
		while (idx < len)
		{
			tmp = argv[1][idx];
			argv[1][idx] = argv[1][len];
			argv[1][len] = tmp;
			idx++;
			len--;
		}
		ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
*/
/*
#include <unistd.h>

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

void	ft_putstr(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		ft_putchar(str[idx]);
		idx++;
	}
}

char	*ft_rev_print(char *str)
{
	int	idx;

	idx = ft_strlen(str);
	idx--;
	while (idx >= 0)
	{
		write(1, &str[idx], 1);
		idx--;
	}
	return (str);
}

int	main(void)
{
	char str[] = "dlroW olleH";

	ft_rev_print(str);
}
*/
