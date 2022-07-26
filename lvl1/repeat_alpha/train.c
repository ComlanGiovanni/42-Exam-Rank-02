/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 21:50:56 by gcomlan           #+#    #+#             */
/*   Updated: 2022/07/27 00:33:33 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_repeat_alpha(char *str)
{
	int	idx;
	int	pos;

	idx = 0;
	pos = 0;
	while (str[idx])
	{
		if (str[idx] >= 'A' && str[idx] <= 'Z')
		{
			pos = str[idx] - 65;
			while (pos >= 0)
			{
				ft_putchar(str[idx]);
				pos--;
			}
		}
		else if (str[idx] >= 'a' && str[idx] <= 'z')
		{
			pos = str[idx] - 97;
			while (pos >= 0)
			{
				ft_putchar(str[idx]);
				pos--;
			}
		}
		else
			ft_putchar(str[idx]);
		idx++;
	}
	ft_putchar('\n');
	return (*str);
}

int	main(int argc char const *argv[])
{
	if (argc == 2)
		ft_repeat_alpha(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}

/*
https://github.com/pasqualerossi/42-School-Exam-Rank-02
https://github.com/barimehdi77/42-piscine-exam
https://github.com/48d31kh413k/1337-Piscine-42
*/
