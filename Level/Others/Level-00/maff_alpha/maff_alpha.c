/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 22:05:27 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/21 23:50:00 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdlib.h> // EXIT_SUCCESS

static void	ft_putchar_fd(char character,	int file_descriptor);
static int	ft_islower(int character);
static int	ft_toupper(int character);
static void	ft_maff_alpha(void);

int	main(void)
{
	ft_maff_alpha();
	return (EXIT_SUCCESS);
}

static void	ft_putchar_fd(char character,	int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static int	ft_islower(int character)
{
	return (((character >= 'a') && (character <= 'z')));
}

static int	ft_toupper(int character)
{
	if (ft_islower(character))
		character = (character - ' ');
	return (character);
}

static void	ft_maff_alpha(void)
{
	char	alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		if ((alphabet % 0x2) == 0x0)
			ft_putchar_fd(ft_toupper(alphabet), STDOUT_FILENO);
		else
			ft_putchar_fd(alphabet, STDOUT_FILENO);
		alphabet++;
	}
	ft_putchar_fd('\n', STDOUT_FILENO);
}
