/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:42:05 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 18:23:40 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> // NULL

int	max(int *tab, unsigned int len)
{
	static int	max;

	if (len <= 0x0 || tab == NULL)
		return (0x0);
	len--;
	max = tab[len];
	while (len--)
		if (tab[len] > max)
			max = tab[len];
	return (max);
}

/*
static void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

int	main(void)
{
	int	arr[4];

	arr[0] = 7;
	arr[1] = 2;
	arr[2] = 4;
	arr[3] = 9;
	ft_putchar_fd((max(arr, 4) + '0'), STDOUT_FILENO);
	ft_putchar_fd(10, STDOUT_FILENO);
	ft_putchar_fd((max(NULL, 4) + '0'), STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
	ft_putchar_fd((max(arr, 0) + '0'), STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}
*/
// int array1[] = {1, 2, 3, 4, 5};
// int array2[] = {5, 4, 3, 2, 1};
// int array3[] = {-1, -2, -3, -4, -5};
// int array4[] = {7, 2, 8, 6, 4};
// int array5[] = {};
//
// printf("Max of array1: %d\n", max(array1, 5)); // Should print 5
// printf("Max of array2: %d\n", max(array2, 5)); // Should print 5
// printf("Max of array3: %d\n", max(array3, 5)); // Should print -1
// printf("Max of array4: %d\n", max(array4, 5)); // Should print 8
// printf("Max of array5: %d\n", max(array5, 0)); // Should print 0
// #include <unistd.h> // For write
// #include <stddef.h> // For NULL || (void *)0 || 0
//
// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }
//
// int	max(int *tab, unsigned int len)
// {
// 	int	max;
//
// 	if (len <= 0 || tab == NULL)
// 		return (0);
// 	max = tab[--len];
// 	while (len--)
// 		if (tab[len] > max)
// 			max = tab[len];
// 	return (max);
// }
//
// int	main(void)
// {
// 	int	arr[4];
//
// 	arr[0] = 7;
// 	arr[1] = 2;
// 	arr[2] = 4;
// 	arr[3] = 9;
// 	ft_putchar(max(arr, 4) + '0');
// 	ft_putchar(10);
// 	ft_putchar(max(NULL, 4) + '0');
// 	ft_putchar('\n');
// 	return (0);
// }
/*
int		max(int* tab, unsigned int len)
{
	int i;
	int tmp;

	i = 1;
	while (i < len - 1)
	{
		if (tab[i] < tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
	return (tab[0]);
}
*/
