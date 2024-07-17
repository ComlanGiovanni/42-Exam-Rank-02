/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:13:38 by gcomlan           #+#    #+#             */
/*   Updated: 2024/07/15 23:53:04 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (STDOUT_FILENO, &c, sizeof(char));
}

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
		ft_putchar(*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rotation(argv[1], 13);
	ft_putchar('\n');
	return (EXIT_SUCCESS);
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
