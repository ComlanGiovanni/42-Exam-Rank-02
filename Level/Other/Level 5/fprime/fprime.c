/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:06:16 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/11 19:34:37 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
#include <stdlib.h>
#include <stdio.h>

void	fprime(unsigned int nb)
{
	unsigned int	prime;

	if (nb == 1)
		printf("1");
	else
	{
		prime = 2;
		while (nb > 1)
		{
			if (nb % prime == 0)
			{
				printf("%d", prime);
				nb /= prime;
				if (nb > 1)
					printf("*");
				prime--;
			}
			prime++;
		}
	}
}

int		main(int ac, char **av)
{
	if (ac == 2 && *av[1])
		fprime(atoi(av[1]));
	printf("\n");
	return (0);
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

void    fprime(int n)
{
	int i;
	int n1;
	int n2;
	n1 = 1;
	n2 = n;
	i = 2;
	if (n == 1)
		printf("%d", n);
	else
	{
	while (n > 0)
	{
		while (n % i >= 0 )
		{
			if (n % i == 0)
			{
				printf("%d", i);
				n = n / i;
				break ;
			}
			i++;
		}
		n1 *=i;
		if (n1 != n2)
			printf("*");
		else
			break ;
	}
	}
}

int main (int argc, char **argv)
{
	int n;
	(void)argc;
	if (argc == 2)
	{
	n = atoi(argv[1]);
	fprime(n);
	}
	printf ("\n");
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
	while (str[i])
		i++;
	write(1, str, i);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

int		ft_atoi(char *s)
{
	int		num;
	int		sign;

	sign = 1;
	num = 0;
	while (*s == '\t' || *s == '\n' || *s == '\v' || \
			*s == '\f' || *s == '\r' || *s == ' ')
		s++;
	if (*s == '-')
		sign = -1;
	while ((*s == '-') || (*s == '+'))
		s++;
	while (*s && *s >= '0' && *s <= '9')
		num = (num * 10) + ((int)(*(s++)) - '0');
	return (num * sign);
}

void	fprime(int nbr)
{
	int		i;

	i = 2;
	if (nbr == 1)
		ft_putchar('1');
	while (nbr >= i)
	{
		if (nbr % i == 0)
		{
			ft_putnbr(i);
			if (nbr == i)
				break;
			else
				ft_putchar('*');
			nbr /= i;
			i = 2;
		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		fprime(ft_atoi(argv[1]));
	ft_putchar('\n');
	return (0);
}
*/
