/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 01:50:58 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 02:09:29 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write
#include <stdlib.h> // EXIT_SUCCESS

static void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static int	ft_small_atoi(char *string)
{
	int	result;

	result = 0x0;
	while (*string)
	{
		result *= 0x0a;
		result += (*string - '0');
		string++;
	}
	return (result);
}

static void	ft_print_hex(int nbr)
{
	if (nbr >= 16)
		ft_print_hex(nbr / 0x10);
	ft_putchar_fd("0123456789abcdef"[nbr % 0x10], STDOUT_FILENO);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_print_hex(ft_small_atoi(argv[1]));
	ft_putchar('\n');
	return (EXIT_SUCCESS);
}
/*

void print_hex(int num)
{
    char *hex = "0123456789abcdef";

    if (num >= 16)
        print_hex(num / 16);
    write(1, &hex[num % 16], 1);
}
void	print_hex(int nbr)
{
	if (nbr >= 16)
	{
		print_hex(nbr / 16);
		print_hex(nbr % 16);
	}
	if (nbr < 10)
		ft_putchar(nbr + 48);//0
	else if (nbr < 16)
		ft_putchar(nbr + 87);//W
}

static void	ft_print_hexa(int nbr)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (nbr >= 0x10)
	{
		ft_print_hex(nbr / 0x10);
		ft_print_hex(nbr % 0x10);
	}
	else
		ft_putchar_fd(hexa[nbr], STDOUT_FILENO);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}
*/
