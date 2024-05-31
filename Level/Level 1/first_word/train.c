/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 22:22:25 by gcomlan           #+#    #+#             */
/*   Updated: 2024/04/17 16:47:53 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write && STDOUT_FILENO

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

int	ft_isblank(int c)
{
	return (c == ' ' || c == '\t');
}

void	first_word(char *str)
{
	int	idx;

	idx = 0;
	while (ft_isblank(str[idx]))
		idx++;
	while (str[idx] != '\0' && !ft_isblank(str[idx]))
	{
		ft_putchar(str[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
