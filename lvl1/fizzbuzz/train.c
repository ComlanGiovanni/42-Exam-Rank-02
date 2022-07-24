/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 23:48:01 by gcomlan           #+#    #+#             */
/*   Updated: 2022/07/24 20:38:19 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
		idx++;
	return (idx);
}

void	ft_put_str(char *str)
{
	int	len;
	int	idx;

	len = ft_strlen(str);
	idx = 0;
	while (len--)
	{
		ft_putchar(str[idx]);
		idx++;
	}
}

void	ft_nbr(int number)
{
	if (number > 9)
		ft_nbr(number / 10);
	write(1, &"0123456789"[number % 10], 1);
	//ft_put_str(&"0123456789"[number % 10]);
}

int	main(void)
{
	int	number;

	number = 1;
	while (number <= 100)
	{
		if ((number % 3 == 0) && (number % 5 == 0))
			ft_put_str("fizzbuzz");
		else if ((number % 3) == 0)
			ft_put_str("fizz");
		else if ((number % 5) == 0)
			ft_put_str("buzz");
		else
			ft_nbr(number);
		ft_putchar('\n');
		number++;
	}
	return (0);
}
