/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 22:49:06 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/09 17:48:04 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

int	main(void)
{
	write(1, "hello", ft_strlen("hello"));
	return (0);
}

/*
#include <unistd.h>

int ft_strlen(char *str){return(str && *str ? ft_strlen(str + 1) + 1 : 0);}
int main(int argc, char **argv){return(write(1, argv[1], ft_strlen(argv[1])));}
*/

/*
Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);

*/
