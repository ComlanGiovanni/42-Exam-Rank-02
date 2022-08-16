/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:22:28 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/16 15:40:56 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>

int main(int ac, char **av)
{
	int i = 1;
	int  t[32] = {0};
	int j ;

	if(ac == 1)
	{
		write(1,"options: abcdefghijklmnopqrstuvwxyz\n",36);
		return 0;
	}
	i = 1;
	while (i < ac)
	{
		j = 1;
		if(av[i][0] == '-')
		{
			while(av[i][j] && av[i][j] >= 'a'  && av[i][j] <= 'z')
			{
				if(av[i][j] == 'h')
				{
					write(1,"options: abcdefghijklmnopqrstuvwxyz\n",36);
					return 0;
				}

				t['z' - av[i][j] + 6] = 1;
				j++;
			}

			if (av[i][j])
			{
				write(1,"Invalid Option\n",15);
				return 0;
			}
			j++;
		}
		i++;
	}
	i = 0;
		while (i < 32)
		{
		t[i] = '0' + t[i];
		write(1,&t[i++],1);
			if(i == 32)
				write(1,"\n",1);
			else if(i % 8 == 0)
				write(1," ",1);

		}

	return 0;
}
*/

/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(*(str + i))
		i++;
	write(1, str, i);
}

int		ft_options(int ac, char **av)
{
	int  temp_alph[32] = {0};
	int i;
	int j ;


	i = 0;
	while (i < ac)
	{
		j = 1;
		if(av[i][0] == '-')
		{
			while(av[i][j] && (av[i][j] >= 'a') && (av[i][j] <= 'z'))
			{
				if(av[i][j] == 'h')
				{
					ft_putstr("options: abcdefghijklmnopqrstuvwxyz\n");
					return (1);
				}
				temp_alph['z' - av[i][j] + 6] = 1;
				j++;
			}
			if (av[i][j] && (av[i][j] <= 'a') && (av[i][j] >= 'z'))
			{
				ft_putstr("Invalid Option\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 32)
	{
		ft_putchar(temp_alph[i] + 0);
		i++;
		if(i == 32)
			ft_putchar('\n');
		else if((i % 8) == 0)
			ft_putchar(' ');
	}
	return (0);
}

int 	main(int ac, char **argv)
{
	if(ac == 1)
		ft_putstr("options: abcdefghijklmnopqrstuvwxyz\n");
	else
		ft_options(ac - 1, (argv + 1));
	return (0);
}
*/

/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(*(str + i))
		i++;
	write(1, str, i);
}

void	ft_options(int ac, char **av)
{
	int	temp_alph[32] = {0};
	int i;
	int j;

	i = 0;
	while (i < ac && (av[i][0] == '-'))
	{
		j = 1;
		while(av[i][j])
		{
			if (av[i][j] == 'h')
			{
				ft_putstr("options: abcdefghijklmnopqrstuvwxyz\n");
				return ;
			}
			else if (av[i][j] && ((av[i][j] < 'a') || (av[i][j] > 'z')))
			{
				ft_putstr("Invalid Option\n");
				return ;
			}
			else if ((av[i][j] >= 'a') && (av[i][j] <= 'z'))
				temp_alph[('z' - av[i][j]) + (32 - 26)] = 1;
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 32)
	{
		ft_putchar(temp_alph[i++] + '0');
		if ((i % 8) == 0)
			ft_putchar(' ');
	}
	ft_putchar('\n');
}

int 	main(int ac, char **argv)
{
	if(ac == 1)
		ft_putstr("options: abcdefghijklmnopqrstuvwxyz\n");
	else
		ft_options(ac - 1, (argv + 1));
	return 0;
}
*/
