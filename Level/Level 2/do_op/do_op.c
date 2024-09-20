/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 21:19:33 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/22 10:32:43 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdlib.h> // EXIT_SUCCESS
#include <stdio.h> // printf atoi

static void	ft_do_op(char *operand_1, char operator, char *operand_2)
{
	int	first;
	int	second;
	int	result;

	result = 0x0;
	first = atoi(operand_1);
	second = atoi(operand_2);
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
	printf("%d", result);
}

int	main(int argc, char **argv)
{
	if (argc == 0x4)
	{
		if (argv[0x2][0x1] == '\0')
			ft_do_op(argv[0x1], argv[0x2][0x0], argv[0x3]);
	}
	printf("\n");
	return (EXIT_SUCCESS);
}

// #include <unistd.h> // For write
// #include <stdio.h>
// #include <stdlib.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	do_op(char *operand_1, char operator, char *operand_2)
// {
// 	int		first;
// 	int		second;
// 	int		result;

// 	result = 0;
// 	first = atoi(operand_1);
// 	second = atoi(operand_2);
// 	if (operator == '+')
// 		result = first + second;
// 	else if (operator == '-')
// 		result = first - second;
// 	else if (operator == '*')
// 		result = first * second;
// 	else if (operator == '/')
// 		result = first / second;
// 	else if (operator == '%')
// 		result = first % second;
// 	printf("%d", result);
// }

// int	main(int argc, char **argv)
// {
// 	if (argc == 4)
// 	{
// 		if (argv[2][1] == '\0')
// 			do_op(argv[1], argv[2][0], argv[3]);
// 	}
// 	printf("\n");
// 	return (0);
// }
