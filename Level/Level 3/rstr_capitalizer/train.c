/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 01:34:57 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 01:50:16 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

static void	ft_rstr_capitalizer(char *str);
static int	ft_tolower(int c);
static int	ft_toupper(int c);
static int	ft_islower(char c);

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
	while (*str)
	{
		*str = ft_tolower(*str);
		if (ft_islower(*str) && (*(str + 1) == ' ' || *(str + 1) == '\t'
				|| *(str + 1) == '\0'))
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

static int	ft_islower(char c)
{
	return ((c >= 'a') && (c <= 'z'));
}
