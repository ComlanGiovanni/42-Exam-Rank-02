/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:41:00 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/03 10:17:21 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    check_tab(char c, int *tab)
{
    int    nb;

    nb = c;

    if (tab[nb] == 0)
    {
        tab[nb] = 1 ;
        write(1, &c, 1);
    }
}



int    ft_union(char *s1, char *s2)
{
    int    i;
    int    tab[256] = {0};

    i = 0;
    while (s1[i])
    {
        check_tab(s1[i], tab);
        i++;
    }
    i = 0;
    while (s2[i])
    {
        check_tab(s2[i],tab);
        i++;
    }

}

int    main(void)
{
    ft_union("rien","cette phrase ne cache rien");
}










/*
#include <unistd.h>

int		check_doubles2(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		check_doubles1(char *str, char c, int pos)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			if (check_doubles1(av[1], av[1][i], i))
				write(1, &av[1][i], 1);
			i++;
		}
		i = 0;
		while (av[2][i] != '\0')
		{
			if (check_doubles2(av[1], av[2][i]))
			{
				if (check_doubles1(av[2], av[2][i], i))
					write(1, &av[2][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

*/


#include <unistd.h>

void	print_union(char *a, char *b)
{
	int characters[128] = { 0 };
	int c;

	while (*a != '\0')
	{
		c = *a;
		if (characters[c] == 0)
		{
			write(1, a, 1);
			characters[c] = 1;
		}
		++a;
	}

	while (*b != '\0')
	{
		c = *b;
		if (characters[c] == 0)
		{
			write(1, b, 1);
			characters[c] = 1;
		}
		++b;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		print_union(argv[1], argv[2]);

	write(1, "\n", 1);
	return (0);
}
