/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:59:59 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 15:11:01 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // EXIT_SUCCESS
#include <unistd.h> // write STDOUT_FILENO

static size_t	ft_strlen(char *string)
{
	const char	*pointer_of_last_char;

	pointer_of_last_char = string;
	if (!string)
		return (0x0);
	while (*pointer_of_last_char != '\0')
		pointer_of_last_char++;
	return (pointer_of_last_char - string);
}

static void	ft_putchar_fd(char character, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static void	ft_rev_print(char *str)
{
	size_t	length;

	length = ft_strlen(str);
	while (length > 0x0)
	{
		ft_putchar_fd(str[length - 0x1], STDOUT_FILENO);
		length--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_rev_print(argv[0x1]);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

/*
#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_swap_char(char *a, char *b)
{
	char	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
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
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	rev_print(char *str)
{
	int	idx;
	int	len;

	idx = 0;
	len = ft_strlen(str) - 1;
	while (idx < len)
	{
		ft_swap_char(&str[idx], &str[len]);
		idx++;
		len--;
	}
	ft_putstr(str);
}


int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_print(argv[1]);
	ft_putchar('\n');
}

//	||


#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	len;

	if (ac == 2)
	{
		len = ft_strlen(av[1]);
		while (len--)
			write(1, &av[1][len], 1);
	}
	ft_putchar('\n');
}
*/
