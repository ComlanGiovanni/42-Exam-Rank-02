/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:06:16 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/11 19:05:02 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdlib.h>

int		brackets(char *src, int i)
{
	int count;
	int direction;

	count = 0;
	if (src[i] == '[')
		direction = 1;
	else if (src[i] == ']')
		direction = -1;
	while (src[i] != '\0')
	{
		if (src[i] == '[')
			count++;
		else if (src[i] == ']')
			count--;
		if ((src[i] == '[' || src[i] == ']') && count == 0)
			return (i);
		i += direction;
	}
	return (0);
}

void	brainfuck(char *src)
{
	int i;
	int i2;
	char *ptr;

	i = 0;
	i2 = 0;
	ptr = (char*)malloc(sizeof(char) * 2048);
	while (src[i] != '\0')
	{
		if (src[i] == '>')
			i2++;
		else if (src[i] == '<')
			i2--;
		else if (src[i] == '+')
			ptr[i2]++;
		else if (src[i] == '-')
			ptr[i2]--;
		else if (src[i] == '.')
			write(1, &ptr[i2], 1);
		else if ((src[i] == '[' && !(ptr[i2])) || (src[i] == ']' && ptr[i2]))
			i = brackets(src, i);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac > 1)
		brainfuck(av[1]);
	else
		write(1, "\n", 1);
	return (0);
}
*/

/*
#include <unistd.h>
#include <stdlib.h>

#define BUFF_SIZE 2048

int			main(int argc, const char *argv[])
{
	int		i;
	int		loop;
	char	*pointer;

	if (argc == 2)
	{
		i = 0;
		if (!(pointer = (char *)malloc(sizeof(char) * BUFF_SIZE + 1)))
			return (-1);
		while (i <= BUFF_SIZE)
			pointer[i++] = '\0';
		i = 0;
		while (argv[1][i])
		{
			argv[1][i] == '<' ? pointer += 1 : pointer;
			argv[1][i] == '>' ? pointer -= 1 : pointer;
			argv[1][i] == '+' ? *pointer += 1 : *pointer;
			argv[1][i] == '-' ? *pointer -= 1 : *pointer;
			if (argv[1][i] == '.')
				write(1, &*pointer, 1);
			if (argv[1][i] == '[' && !*pointer)
			{
				loop = 1;
				while (loop)
				{
					i += 1;
					argv[1][i] == '[' ? loop += 1 : loop;
					argv[1][i] == ']' ? loop -= 1 : loop;
				}
			}
			if (argv[1][i] == ']' && *pointer)
			{
				loop = 1;
				while (loop)
				{
					i -= 1;
					argv[1][i] == '[' ? loop -= 1 : loop;
					argv[1][i] == ']' ? loop += 1 : loop;
				}
			}
			i += 1;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
*/



/*
#include <unistd.h>
#include <stdlib.h>

#define BUFF_SIZE 2048

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		find_next(char *str)
{
	int		count;
	int		i;

	i = 1;
	count = 0;
	while (str[i])
	{
		if (str[i] == '[')
			count++;
		else if (str[i] == ']')
		{
			if (count == 0)
				return (i);
			else
				count--;
		}
		i++;
	}
	return (0);
}

int		find_previous(char *str)
{
	int		count;
	int		i;

	i = -1;
	count = 0;
	while (str[i])
	{
		if (str[i] == ']')
			count++;
		else if (str[i] == '[')
		{
			if (count == 0)
				return (i);
			else
				count--;
		}
		i--;
	}
	return (0);
}

int		brainfuck(char *str)
{
	char	*ptr;
	int		c;
	int		p;

	if (!(ptr = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1))))
		return (-1);
	p = 0;
	while (p <= BUFF_SIZE)
		ptr[p++] = '\0';
	p = 0;
	c = 0;
	while (str[c])
	{
		if (str[c] == '>')
			p++;
		else if (str[c] == '<')
			p--;
		else if (str[c] == '+')
			ptr[p]++;
		else if (str[c] == '-')
			ptr[p]--;
		else if (str[c] == '.')
			ft_putchar(ptr[p]);

		if ((str[c] == '[') && !ptr[p])
			c += find_next(str + c);
		else if ((str[c] == ']') && ptr[p])
			c += find_previous(str + c);
		else
			c++;
	}
	free(ptr);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		brainfuck(av[1]);
	else
		ft_putchar('\n');
	return (0);
}
*/
