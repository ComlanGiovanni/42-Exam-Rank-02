/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:58:47 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/19 12:58:50 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_space(char c)
{
	if ((c == ' ') || (c == '\t'))
		return (1);
	return (0);
}

void	ft_print_first_word(char *str, int begin_space)
{
	while (str[begin_space] != '\0' && !is_space(str[begin_space]))
	{
		ft_putchar(str[begin_space]);
		begin_space++;
	}
}

void	rostring(char *str)
{
	int	idx;
	int	begin_space;

	begin_space = 0;
	while (str[begin_space] != '\0' && is_space(str[begin_space]))
		begin_space++;
	idx = begin_space;
	while (str[idx] != '\0' && !is_space(str[idx]))
		idx++;
	while (str[idx] != '\0')
	{
		if (str[idx] != '\0' && !is_space(str[idx]) && is_space(str[idx - 1]))
		{
			while (str[idx] != '\0' && !is_space(str[idx]))
			{
				ft_putchar(str[idx]);
				idx++;
			}
			ft_putchar(' ');
		}
		idx++;
	}
	ft_print_first_word(str, begin_space);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		rostring(argv[1]);
	ft_putchar('\n');
	return (0);
}
