/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:49:41 by gcomlan           #+#    #+#             */
/*   Updated: 2024/04/24 16:49:05 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write

int	ft_islower(int c)
{
	return ((c >= 'a') && (c <= 'z'));
}

int	ft_isupper(int c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

void	rotation(char *str, int shift)
{
	while (*str)
	{
		if (ft_islower(*str))
			*str = ((((*str - 'a') + shift) % 26) + 'a');
		else if (ft_isupper(*str))
			*str = ((((*str - 'A') + shift) % 26) + 'A');
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rotation(argv[1], 13);
	write(1, "\n", 1);
	return (0);
}
