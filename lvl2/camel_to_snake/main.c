/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:41:00 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/02 11:54:00 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	camel_to_snake(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] >= 'A' && str[idx] <= 'Z')
		{
			write(1, "_", 1);
			str[idx] = str[idx] + ('a' - 'A');
		}
		write(1, &str[idx], 1);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		camel_to_snake(argv[1]);
	write(1, "\n", 1);
	return (0);
}

/*
#include <unistd.h>

void	camel_to_snake(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			write(1, "_", 1);
			*str = *str + ('a' - 'A');
		}
		write(1, str, 1);
		++str;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		camel_to_snake(argv[1]);

	write(1, "\n", 1);
	return (0);
}
*/
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*string_malloc(char *str)
{
	int		size;
	int		caps;
	char		*ret;

	size = 0;
	caps = 0;
	while (str[size] != '\0')
	{
		if (str[size] >= 65 && str[size] <= 90)
			caps++;
		size++;
	}
	ret = (char *)malloc(caps + size);
	if (!ret)
		return (NULL);
	return (ret);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char	*str;

	i = 0;
	j = 0;
	if (argc != 2)
		return (0);
	str = string_malloc(argv[1]);
	if (str)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				str[j++] = '_';
				str[j++] = argv[1][i] + 32;
			}
			else
				str[j++] = argv[1][i];
			i++;
		}
		printf("str - %s\n", str);
		free(str);
	}
	return (0);
}
*/
