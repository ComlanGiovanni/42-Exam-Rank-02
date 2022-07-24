/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:53:37 by gcomlan           #+#    #+#             */
/*   Updated: 2022/07/24 21:14:54 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	main(int argc, char const *argv[])
{
	if (argc == 2)
		ft_repeat_alpha(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
