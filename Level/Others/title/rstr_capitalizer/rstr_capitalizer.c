/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 01:55:34 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 01:55:36 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rstr_capitalizer(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] >= 'A' && 'Z' >= str[idx])
			str[idx] += 32;
		if ((str[idx] >= 'a' && 'z' >= str[idx]) && (str[idx + 1] == ' '
				|| str[idx + 1] == '\t' || str[idx + 1] == '\0'))
			str[idx] -= 32;
		ft_putchar(str[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	int	idx;

	if (argc < 2)
		ft_putchar('\n');
	else
	{
		idx = 1;
		while (idx < argc)
		{
			ft_rstr_capitalizer(argv[idx]);
			ft_putchar('\n');
			idx++;
		}
	}
	return (0);
}

static void	ft_rstr_capitalizer(char *str)
{
	char	*start;
	char	*end;
	char	*last_letter;

	start = str;
	end = str;
	while (*end)
	{
		while (*end && ft_isspace(*end))
		{
			write(STDOUT_FILENO, end, 1);
			end++;
		}
		start = end;
		while (*end && !ft_isspace(*end))
		{
			*end = ft_tolower(*end);
			end++;
		}
		if (end > start)
		{
			last_letter = end - 1;
			while (last_letter >= start && !((*last_letter >= 'a'
						&& *last_letter <= 'z') || (*last_letter >= 'A'
						&& *last_letter <= 'Z')))
				last_letter--;
			if (last_letter >= start)
				*last_letter = ft_toupper(*last_letter);
		}
		write(STDOUT_FILENO, start, end - start);
	}
}
