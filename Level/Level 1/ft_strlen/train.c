/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:44:11 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 13:46:56 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

/*
int	main(void)
{
	write(1, "hello", ft_strlen("hello"));
	return (0);
}

int main(int argc, char **argv){return(write(1, argv[1], ft_strlen(argv[1])));}

*/
