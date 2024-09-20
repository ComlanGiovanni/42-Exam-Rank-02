/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:04:39 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/22 12:31:43 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write STDOUT_FILENO
#include <stdlib.h> // EXIT_SUCCESS

static size_t	ft_get_index_of_last_char_in_last_word(int index, char *string)
{
	while (index > 0x0 && (string[index] == ' ' \
		|| (string[index] >= '\t' && string[index] <= '\r')))
		index--;
	return (index);
}

static size_t	ft_get_index_of_first_char_in_last_word(int index_last_char, \
	char *string)
{
	while (index_last_char > 0x0 && !((string[index_last_char] == ' ') \
		|| ((string[index_last_char] >= '\t') \
			&& (string[index_last_char] <= '\r'))))
		index_last_char--;
	return (index_last_char);
}

static size_t	ft_strlen(char *string)
{
	const char	*last_char_of_string;

	last_char_of_string = string;
	while (*last_char_of_string != '\0')
		last_char_of_string++;
	return (last_char_of_string - string);
}

static void	ft_last_word(char *string)
{
	static size_t	index;
	static size_t	end_of_last_word;
	static size_t	start_of_last_word;

	index = 0x0;
	end_of_last_word = 0x0;
	start_of_last_word = 0x0;
	index = ft_strlen(string) - 0x1;
	end_of_last_word = \
		ft_get_index_of_last_char_in_last_word(index, string);
	start_of_last_word = \
		ft_get_index_of_first_char_in_last_word(end_of_last_word, string);
	start_of_last_word++;
	while (start_of_last_word <= end_of_last_word)
		write(STDOUT_FILENO, &string[start_of_last_word++], sizeof(char));
}
//ft_display_last_word(string, start_of_last_word, end_of_last_word);

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_last_word(argv[0x1]);
	write(STDOUT_FILENO, "\n", sizeof(char));
	return (EXIT_SUCCESS);
}

/*
#include <unistd.h> // For write

int		main(int ac, char **av)
{
	int i;
	char *lw;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] <= 32 && av[1][i + 1] > 32)
				lw = &av[1][i + 1];
			i++;
		}
		i = 0;
		while (lw && lw[i] > 32)
		{
			write(1, &lw[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
*/
