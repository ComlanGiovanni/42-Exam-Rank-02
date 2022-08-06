/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:43:22 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/06 11:44:53 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	do_op(char *operands_1, char operator, char *operands_2)
{
	int		result;
	int		first;
	int		second;

	result = 0;
	first = atoi(operands_1);
	second = atoi(operands_2);
	if (operator == '+')
		result = first + second;
	else if (operator == '-')
		result = first - second;
	else if (operator == '*')
		result = first * second;
	else if (operator == '/')
		result = first / second;
	else if (operator == '%')
		result = first % second;
	printf("%d\n", result);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][1] == '\0')
			do_op(argv[1], argv[2][0], argv[3]);
	}
	else
		ft_putchar('\n');
	return (0);
}
