/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:33:10 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 16:55:52 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // EXIT_SUCCESS
#include <unistd.h> // write STDOUT_FILENO

static int	ft_islower(char character)
{
	return ((character >= 'a') && (character <= 'z'));
}

static int	ft_isupper(int character)
{
	return ((character >= 'A') && (character <= 'Z'));
}

static void	ft_putchar_fd(char character, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write (file_descriptor, &character, sizeof(char));
}

static void	ft_ulstr(char *str)
{
	const int	case_difference = ('a' - 'A');

	while (*str)
	{
		if (ft_islower(*str))
			*str -= case_difference;
		else if (ft_isupper(*str))
			*str += case_difference;
		ft_putchar_fd(*str, STDOUT_FILENO);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_ulstr(argv[0x1]);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

// static int	ft_tolower(int c)
// {
// 	if ((c >= 'A') && (c <= 'Z'))
// 		c += ' ';
// 	return (c);
// }

// static int	ft_toupper(int c)
// {
// 	if ((c >= 'a') && (c <= 'z'))
// 		c -= ' ';
// 	return (c);
// }

// #include <unistd.h> // For write

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ulstr(char *str)
// {
// 	int	idx;

// 	idx = 0;
// 	while (str[idx] != '\0')
// 	{
// 		if ((str[idx] >= 'A') && (str[idx] <= 'Z'))
// 			str[idx] += ' ';
// 		else if ((str[idx] >= 'a') && (str[idx] <= 'z'))
// 			str[idx] -= ' ';
// 		ft_putchar(str[idx]);
// 		idx++;
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		ulstr(argv[1]);
// 	ft_putchar('\n');
// 	return (0);
// }

/*		Other short or long way to do
you can define a macro if you want
//# define TO_LOWER(c) (((c) >= 'A' && (c) <= 'Z') ? ((c) + 'a' - 'A') : (c))

#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c += ' ';
	return (c);
}

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		c -= ' ';
	return (c);
}

//return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;

void	ft_ulstr(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if ((str[idx] >= 'A') && (str[idx] <= 'Z'))
			ft_tolower(str[idx]);
		else if ((str[idx] >= 'a') && (str[idx] <= 'z'))
			ft_toupper(str[idx]);
		ft_putchar(str[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_ulstr(argv[1]);
	ft_putchar('\n');
	return (0);
}

int	ft_isupper(int c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

int	ft_islower(int c)
{
	return ((c >= 'a') && (c <= 'z'));
}
*/
