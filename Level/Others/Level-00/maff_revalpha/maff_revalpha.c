/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 22:07:14 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/21 23:51:28 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write
#include <stdlib.h> // EXIT_SUCCESS

static void	ft_putchar_fd(char character,	int file_descriptor);
static int	ft_islower(int character);
static int	ft_toupper(int character);
static void	ft_maff_rev_alpha(void);

int	main(void)
{
	ft_maff_rev_alpha();
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

static void	ft_maff_rev_alpha(void)
{
	char	alphabet;

	alphabet = 'z';
	while (alphabet >= 'a')
	{
		if ((alphabet % 2) == 0x0)
			ft_putchar_fd(alphabet, STDOUT_FILENO);
		else
			ft_putchar_fd(ft_toupper(alphabet), STDOUT_FILENO);
		alphabet--;
	}
	ft_putchar_fd('\n', STDOUT_FILENO);
}

// #include <unistd.h>

// void ft_putchar(char c)
// {
//     write(1, &c, 1);
// }

// void maff_revalpha(void)
// {
//     char alphabet;

//     alphabet = 'z';

//     while (alphabet >= 'a')
//     {
//         if ((alphabet % 2) == 0)
//             ft_putchar(alphabet);
//         else
//             ft_putchar(alphabet - ' ');
//         alphabet--;
//     }
//     ft_putchar('\n');
// }
// int main (void)
// {
//     maff_revalpha();
//     return (0);
// }
