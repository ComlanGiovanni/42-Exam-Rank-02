/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:04:39 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 18:50:09 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write STDOUT_FILENO
#include <stdlib.h> // EXIT_SUCCESS

static int	ft_isspace(int character)
{
	return ((character == ' ') || ((character >= '\t') && (character <= '\r')));
}

static size_t	ft_get_idx_of_last_word_char(int index, char *str)
{
	while (ft_isspace(str[index]))
		index--;
	return (index);
}

static size_t	ft_get_idx_of_first_word_char(int index_last_char, char *str)
{
	while (str[index_last_char] != '\0' && !ft_isspace(str[index_last_char]))
		index_last_char--;
	return (++index_last_char);
}

static void	ft_last_word(char *str)
{
	static size_t	index;
	static size_t	end_of_last_word;
	static size_t	start_of_last_word;

	index = 0x0;
	end_of_last_word = 0x0;
	start_of_last_word = 0x0;
	while (str[index] != '\0')
		index++;
	index -= 0x1;
	end_of_last_word = ft_get_idx_of_first_word_char(index, str);
	start_of_last_word = ft_get_idx_of_first_word_char(end_of_last_word, str);
	while (start_of_last_word <= end_of_last_word)
		write(STDOUT_FILENO, &str[start_of_last_word++], sizeof(char));
}

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_last_word(argv[0x1]);
	write(STDOUT_FILENO, "\n", sizeof(char));
	return (EXIT_FAILURE);
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
