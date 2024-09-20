/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:38:17 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 18:24:02 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // EXIT_SUCCESS
#include <unistd.h> // write STDOUT_FILENO

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

static void	ft_putchar_fd(char character, int file_descriptor)
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
