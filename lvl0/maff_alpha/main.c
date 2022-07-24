/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:27:51 by gcomlan           #+#    #+#             */
/*   Updated: 2022/07/24 23:34:39 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char even;
	char odd;

	even = 'B';
	odd = 'a';
	while (even <= 'Z')
	{
		write(1, &odd, 1);
		write(1, &even, 1);
		even += 2;
		odd += 2;
	}
	write(1, "\n", 1);
	return (0);
}


#include <unistd.h>

int		main(void)
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
	return (0);
}
