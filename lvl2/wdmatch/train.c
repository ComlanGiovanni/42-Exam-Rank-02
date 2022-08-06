/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:44:39 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/06 21:09:34 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

void	wd_match(char *first, char *second)
{
	int	idx_first;
	int	idx_second;
	int	word_len;

	idx_first = 0;
	idx_second = 0;
	word_len = 0;
	while (first[idx_first] != '\0')
	{
		while (second[idx_second] != '\0')
		{
			if (first[idx_first] == second[idx_second])
			{
				word_len++;
				break ;
			}
			idx_second++;
		}
		idx_first++;
	}
	if (word_len == ft_strlen(first))
		ft_putstr(first);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		wd_match(argv[1], argv[2]);
	ft_putchar('\n');
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
	while (*str)
		write(1, str++, 1);
}

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

void	ft_wdmatch(char *first, char *second)
{
	int	idx_first;
	int	idx_second;

	idx_first = 0;
	idx_second = 0;
	while (second[idx_second] != '\0')
	{
		if (first[idx_first] == second[idx_second++])
			idx_first++;
		if (!first[idx_first])
			ft_putstr(first);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_wdmatch(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
*/
