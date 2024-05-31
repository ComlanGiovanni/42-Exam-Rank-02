/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:13:38 by gcomlan           #+#    #+#             */
/*   Updated: 2024/04/24 16:47:59 by gicomlan         ###   ########.fr       */
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

void	rot_13(char *str, int shift)
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
		rot_13(argv[1], 13);
	write(1, "\n", 1);
	return (0);
}

/*		Other short or long way to do


#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot_13(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if ((str[idx] >= 'A' && str[idx] <= 'M')
			|| (str[idx] >= 'a' && str[idx] <= 'm'))
			str[idx] += 13;
		else if ((str[idx] >= 'N' && str[idx] <= 'Z')
			|| (str[idx] >= 'n' && str[idx] <= 'z'))
			str[idx] -= 13;
		ft_putchar(str[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rot_13(argv[1]);
	ft_putchar("\n");
	return (0);
}
*/
