/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:25:51 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 14:31:27 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> //NULL

int	ft_strlen(char *str)
{
	static int	index;

	index = 0x0;
	if (str == NULL)
		return (0x0);
	while (str[index] != '\0')
		index++;
	return (index);
}

// int ft_strlen(char *str)
// {
// 	return(str && *str ? ft_strlen(str + 0x1) + 0x1 : 0x0);
// }

/*	Main test

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
	return (0x0);
}

*/

/*

int	main(int argc, char **argv)
{
	return(write(1, argv[1], ft_strlen(argv[1])));
}

*/
