/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:17:24 by gcomlan           #+#    #+#             */
/*   Updated: 2024/04/24 17:01:55 by gicomlan         ###   ########.fr       */
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
		rotation(argv[1], 1);
	write(1, "\n", 1);
	return (0);
}

/*		Other short or long way to do

#include <unistd.h> // For write

void	ft_putchar(char *c)
{
	write(1, &c, 1);
}

void	ft_rot_one(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if ((str[idx] >= 'A') && (str[idx] <= 'Y')
			|| (str[idx] >= 'a') && (str[idx] <= 'y'))
			str[idx] += 1;
		else if (str[idx] == 'Z' || str[idx] == 'z')
			str[idx] -= 25;
		ft_putchar(str[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rot_one(argv[1]);
	return (0);
}
*/
