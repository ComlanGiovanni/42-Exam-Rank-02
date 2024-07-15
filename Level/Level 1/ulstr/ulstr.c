/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:49:21 by gcomlan           #+#    #+#             */
/*   Updated: 2024/07/12 13:10:22 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ulstr(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if ((str[idx] >= 'A') && (str[idx] <= 'Z'))
			str[idx] += ' ';
		else if ((str[idx] >= 'a') && (str[idx] <= 'z'))
			str[idx] -= ' ';
		ft_putchar(str[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv[1]);
	ft_putchar('\n');
	return (0);
}

/*		Other short or long way to do
you can define a macro if you want
//# define TO_LOWER(c) (((c) >= 'A' && (c) <= 'Z') ? ((c) + 'a' - 'A') : (c))

#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c += ' ';
	return (c);
}

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		c -= ' ';
	return (c);
}

//return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;

void	ft_ulstr(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if ((str[idx] >= 'A') && (str[idx] <= 'Z'))
			ft_tolower(str[idx]);
		else if ((str[idx] >= 'a') && (str[idx] <= 'z'))
			ft_toupper(str[idx]);
		ft_putchar(str[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_ulstr(argv[1]);
	ft_putchar('\n');
	return (0);
}

int	ft_isupper(int c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

int	ft_islower(int c)
{
	return ((c >= 'a') && (c <= 'z'));
}
*/
