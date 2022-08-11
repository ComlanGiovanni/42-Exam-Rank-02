/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:41:00 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/11 12:59:37 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		ft_putchar(str[idx]);
		idx++;
	}
}

void	ft_small_putnbr(int nbr)
{
	if (nbr > 9)
	{
		ft_small_putnbr(nbr / 10);
		ft_small_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

int	ft_small_atoi(char *str)
{
	int	idx;
	int	result;

	idx = 0;
	result = 0;
	while (str[idx] != '\0')
	{
		result *= 10;
		result += str[idx] - '0';
		idx++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	int	idx;
	int	nbr;

	idx = 1;
	if (argc == 2)
	{
		nbr = ft_small_atoi(argv[1]);
		while (idx <= 9)
		{
			ft_small_putnbr(idx);
			ft_putstr(" x ");
			ft_small_putnbr(nbr);
			ft_putstr(" = ");
			ft_small_putnbr(nbr * idx);
			if (idx < 9)
				ft_putchar('\n');
			idx++;
		}
	}
	ft_putchar('\n');
	return (0);
}
