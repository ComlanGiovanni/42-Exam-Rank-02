/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:44:39 by gcomlan           #+#    #+#             */
/*   Updated: 2024/07/23 03:50:14 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

static void	ft_rstr_capitalizer(char *str);
static int	ft_tolower(int c);
static int	ft_toupper(int c);
//static int	ft_isspace(int c);

int	main(int argc, char *argv[])
{
	int	index;

	if (argc < 0x2)
		write(STDOUT_FILENO, "\n", sizeof(char));
	else
	{
		index = 0x1;
		while (index < argc)
		{
			ft_rstr_capitalizer(argv[index]);
			write(STDOUT_FILENO, "\n", sizeof(char));
			index++;
		}
	}
	return (EXIT_SUCCESS);
}

static void	ft_rstr_capitalizer(char *str)
{
	int	capitalize_next;

	capitalize_next = 0x1;
	while (*str)
	{
		if (capitalize_next)
			*str = ft_tolower(*str);
		if ((*str >= 'a' && 'z' >= *str) && (*(str + 1) == ' '
				|| *(str + 1) == '\t' || *(str + 1) == '\0'))
			*str = ft_toupper(*str);
		write(STDOUT_FILENO, str, sizeof(char));
		str++;
	}
}

static int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c += ('a' - 'A');
	return (c);
}

static int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		c -= ('a' - 'A');
	return (c);
}

// static int	ft_isspace(int c)
// {
// 	return ((c == ' ') || ((c >= '\t') && (c <= '\r')));
// }
