/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:43:22 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/02 17:32:22 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h> // atoi
#include <stdio.h> // printf

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	do_op(char *operand_1, char operator, char *operand_2)
{
	int	first;
	int	second;
	int	result;

	first = atoi(operand_1);
	second = atoi(operand_2);
	result = 0;
	if (operator == '+')
		result = first + second;
	else if (operator == '-')
		result = first - second;
	else if (operator == '/')
		result = first / second;
	else if (operator == '%')
		result = first % second;
	printf("%d\n", result);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		do_op(argv[1], argv[2][0], argv[3]);
	else
		ft_putchar('\n');
	return (0);
}
