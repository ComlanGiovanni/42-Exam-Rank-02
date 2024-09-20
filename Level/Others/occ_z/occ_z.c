/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   occ_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:53:02 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/24 13:53:30 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	occ_z(char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
		return (0);
	while (*str)
	{
		if (*str == 'z')
			count++;
		str++;
	}
	return (count);
}

