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

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
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

char	*ft_strrev(char *str)
{
	int		idx;
	int		size;
	char	tmp;

	idx = 0;
	size = ft_strlen(str) - 1;
	while (size > idx)
	{
		tmp = str[idx];
		str[idx] = str[size];
		str[size] = tmp;
		size--;
		idx++;
	}
	return (str);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_putstr(ft_strrev(argv[1]));
	ft_putchar('\n');
	return (0);
}
