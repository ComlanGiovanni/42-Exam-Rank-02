/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:33:10 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/22 22:06:20 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

static void	ft_ulstr(char *str);
static int	ft_islower(char c);
static int	ft_isupper(int c);
static void	ft_putchar_fd(char c, int fd);

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_ulstr(argv[0x1]);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}

static void	ft_ulstr(char *str)
{
	while (*str != '\0')
	{
		if (ft_islower(*str))
			*str -= ('a' - 'A');
		else if (ft_isupper(*str))
			*str += ('a' - 'A');
		ft_putchar(*str, STDOUT_FILENO);
		str++;
	}
}

static int	ft_islower(char c)
{
	return ((c >= 'a') && (c <= 'z'));
}

static int	ft_isupper(int c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

static void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0x0)
		write (fd, &c, sizeof(char));
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
