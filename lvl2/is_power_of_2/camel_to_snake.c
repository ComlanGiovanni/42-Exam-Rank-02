/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:41:00 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/03 09:54:11 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int		is_power_of_2(unsigned int n)
{
	unsigned long i;

	i = 1;
	while (i < 0xffffffff)
	{
		if (i == n)
			return (1);
		i *= 2;
	}
	return (0);
}









int     is_power_of_2(unsigned int n)
{
    int     i = 1;

    while (i <= n)
    {
        if (i == n)
            return (1);
        i *= 2;
    }
    return (0);
}
