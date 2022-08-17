/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:44:11 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 16:53:32 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write
#include <stddef.h> // For NULL || (void *)0 || 0

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	if (str == NULL)
		return (0);
	while (str[index] != '\0')
		index++;
	return (index);
}

/*		Main test

void	ft_small_put_nbr(int nbr)
{
	char	digit_char;

	if (nbr > 9)
	{
		ft_small_put_nbr(nbr / 10);
		ft_small_put_nbr(nbr % 10);
	}
	else
	{
		digit_char = nbr + '0';
		write(1, &digit_char, 1);
	}
}

int	main(void)
{
	ft_small_put_nbr(ft_strlen("Hello"));
	write(1, &"\n", 1);
	ft_small_put_nbr(ft_strlen(NULL));
	write(1, &"\n", 1);
	ft_small_put_nbr(ft_strlen("World"));
	return (0);
}

*/

/*

int main(int argc, char **argv)
{
	return(write(1, argv[1], ft_strlen(argv[1])));
}

*/
