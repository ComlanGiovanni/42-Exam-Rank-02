/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:11:35 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/04 14:32:13 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int	len;

	idx = 0;
	len = ft_strlen(str);
	while (len--)
		ft_putchar(str[idx++]);
}

char	*ft_strrev(char *str)
{
	int		idx;
	int		len;
	char	tmp;

	idx = 0;
	len = ft_strlen(str) - 1;
	while (len > idx)
	{
		tmp = str[idx];
		str[idx] = str[len];
		str[len] = tmp;
		idx++;
		len--;
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
