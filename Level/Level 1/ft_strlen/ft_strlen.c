/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 22:49:06 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 13:46:37 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

/*

int	ft_strlen(char *str)
{
	int size;

	size = 0;
	while (*str != '\0')
	{
		str++;
		size++;
	}
	return (size);
}

int ft_strlen(char *str){return(str && *str ? ft_strlen(str + 1) + 1 : 0);}
*/
