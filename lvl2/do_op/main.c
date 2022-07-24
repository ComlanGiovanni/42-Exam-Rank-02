/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:43:22 by gcomlan           #+#    #+#             */
/*   Updated: 2022/07/24 23:44:38 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	first = atoi(argv[1]);
	int	second = atoi(argv[3]);
	char	oper = argv[2][0];
	int	res;

	if (argc == 4)
	{
		if (oper == '+')
			res = first + second;
		else if (oper == '-')
			res = first - second;
		else if (oper == '*')
			res = first * second;
		else if (oper == '/')
			res = first / second;
		else if (oper == '%')
			res = first % second;
		printf("%d\n", res);
	}
	else
		write(1, "\n", 1);
	return (0);
}




#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int a;
	int b;
	int result;
	char op;

	result = 0;
	if (ac == 4)
	{
		a = atoi(av[1]);
		op = av[2][0];
		b = atoi(av[3]);
		if (op == '+')
			result = a + b;
		else if (op == '-')
			result = a - b;
		else if (op == '*')
			result = a * b;
		else if (op == '/')
			result = a / b;
		else if (op == '%')
			result = a % b;
		printf("%d\n", result);
	}
	else
		write(1, "\n", 1);
	return (0);
}
