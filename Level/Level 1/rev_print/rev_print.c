/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 00:07:47 by gcomlan           #+#    #+#             */
/*   Updated: 2024/07/15 20:24:41 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write && STDOUT_FILENO

void	ft_putchar(char c)
{
	write (STDOUT_FILENO, &c, 1);
}

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

void	rev_print(char *str)
{
	int	len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		ft_putchar(str[len]);
		len--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_print(argv[1]);
	ft_putchar('\n');
	return (0x0);
}

/*


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

//|
#include <unistd.h> // For write

int	main(int ac, char *av[])
{
	int	i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
			i += 1;
		while (i)
			write(1, &av[1][--i], 1);
	}
	write(1, "\n", 1);
	return (0);
}
*/
