/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 02:37:56 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 16:49:31 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write
#include <stdlib.h> // EXIT_SUCCESS

static void	ft_alpha_mirror(char *str);
static int	ft_isupper(int c);
static int	ft_islower(char c);
static void	ft_putchar_fd(char character,	int file_descriptor);

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_alpha_mirror(argv[0x1]);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

static void	ft_alpha_mirror(char *str)
{
	while (*str)
	{
		if (ft_isupper(*str))
			*str = ('Z' - (*str - 'A'));
		else if (ft_islower(*str))
			*str = ('z' - (*str - 'a'));
		ft_putchar_fd(*str, STDOUT_FILENO);
		str++;
	}
}

static int	ft_isupper(int character)
{
	return ((character >= 'A') && (character <= 'Z'));
}

static int	ft_islower(char character)
{
	return ((character >= 'a') && (character <= 'z'));
}

static void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

// #include <unistd.h> // For write

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	alpha_mirror(char *str)
// {
// 	int	idx;

// 	idx = 0;
// 	while (str[idx] != '\0')
// 	{
// 		if ((str[idx] >= 'A') && (str[idx] <= 'Z'))
// 			str[idx] = ('M' - (str[idx] - 'N'));
// 		else if ((str[idx] >= 'a') && (str[idx] <= 'z'))
// 			str[idx] = ('m' - (str[idx] - 'n'));
// 		ft_putchar(str[idx]);
// 		idx++;
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		alpha_mirror(argv[1]);
// 	ft_putchar('\n');
// 	return (0);
// }
