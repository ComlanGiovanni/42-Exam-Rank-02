/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 00:27:38 by gcomlan           #+#    #+#             */
/*   Updated: 2024/07/12 12:00:27 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write && STDOUT_FILENO

void	ft_put_character(char character)
{
	write(STDOUT_FILENO, &character, sizeof(char));
}

int	ft_string_length(char *string)
{
	return(string && *string ? ft_string_length(string + 1) + 1 : 0);
}

void	reverse_print(char *string)
{
	int		length;

	length = ft_string_length(string);
	while (length >= 0)
	{
		ft_put_character(string[length]);
		length--;
	}
}

int	main(int argument_count, char **argument_vector)
{
	if (argument_count == 2)
		reverse_print(argument_vector[1]);
	ft_put_character('\n');
	return (0x0);
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
