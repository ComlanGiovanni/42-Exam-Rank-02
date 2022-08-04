/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:41:00 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/03 09:58:55 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	last_word(char *str)
{
	int	i = 0;
	while (str[i] != '\0')
		i++;
	i -= 1;
	while(str[i] == '\t' || str[i] == 32)
		i--;
	while (i > 0)
	{	if(str[i] == 32 && str[i] == '\t')
			break;
		i--;
	}
	i++;
	while (str[i] != '\0' && str[i] != 32 && str[i] != '\t')
	{
		write(1, &str[i], 1);
		i++;
	}
}
int main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
}














#include <unistd.h>

int main(int argc, char **argv)
{
    int     i = 0;

    if (argc == 2)
    {
        while (argv[1][i] != '\0')
            i++;
        i--;
        while ((argv[1][i] != ' ' && argv[1][i] != '\t') && i >= 0)
            i--;
        i++;
        while (argv[1][i] != '\0')
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}



















#include <unistd.h>

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
