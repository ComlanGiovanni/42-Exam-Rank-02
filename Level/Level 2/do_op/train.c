/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 21:18:48 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/22 10:39:44 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		{
			ft_do_op(argv[0x1], argv[0x2][0x0], argv[0x3]);
		}
		printf("\n");
		return (EXIT_SUCCESS);
	}
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char *argv[])
// {
// 	if (argc == 4)
// 	{
// 		if (argv[2][0] == '+')
// 			printf("%d", (atoi(argv[1]) + atoi(argv[3])));
// 		if (argv[2][0] == '-')
// 			printf("%d", (atoi(argv[1]) - atoi(argv[3])));
// 		if (argv[2][0] == '*')
// 			printf("%d", (atoi(argv[1]) * atoi(argv[3])));
// 		if (argv[2][0] == '/')
// 			printf("%d", (atoi(argv[1]) / atoi(argv[3])));
// 		if (argv[2][0] == '%')
// 			printf("%d", (atoi(argv[1]) % atoi(argv[3])));
// 	}
// 	printf("\n");
// 	return (EXIT_SUCCESS);
// }
