/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 01:34:45 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 01:48:17 by gicomlan         ###   ########.fr       */
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

// #include <unistd.h> // For write

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_rstr_capitalizer(char *str)
// {
// 	int	idx;

// 	idx = 0;
// 	while (str[idx] != '\0')
// 	{
// 		if (str[idx] >= 'A' && 'Z' >= str[idx])
// 			str[idx] += 32;
// 		if ((str[idx] >= 'a' && 'z' >= str[idx]) && (str[idx + 1] == ' '
// 				|| str[idx + 1] == '\t' || str[idx + 1] == '\0'))
// 			str[idx] -= 32;
// 		ft_putchar(str[idx]);
// 		idx++;
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	int	idx;

// 	if (argc < 2)
// 		ft_putchar('\n');
// 	else
// 	{
// 		idx = 1;
// 		while (idx < argc)
// 		{
// 			ft_rstr_capitalizer(argv[idx]);
// 			ft_putchar('\n');
// 			idx++;
// 		}
// 	}
// 	return (0);
// }

// static void	ft_rstr_capitalizer(char *str)
// {
// 	char	*start;
// 	char	*end;
// 	char	*last_letter;

// 	start = str;
// 	end = str;
// 	while (*end)
// 	{
// 		while (*end && ft_isspace(*end))
// 		{
// 			write(STDOUT_FILENO, end, 1);
// 			end++;
// 		}
// 		start = end;
// 		while (*end && !ft_isspace(*end))
// 		{
// 			*end = ft_tolower(*end);
// 			end++;
// 		}
// 		if (end > start)
// 		{
// 			last_letter = end - 1;
// 			while (last_letter >= start && !((*last_letter >= 'a'
// 						&& *last_letter <= 'z') || (*last_letter >= 'A'
// 						&& *last_letter <= 'Z')))
// 				last_letter--;
// 			if (last_letter >= start)
// 				*last_letter = ft_toupper(*last_letter);
// 		}
// 		write(STDOUT_FILENO, start, end - start);
// 	}
// }
