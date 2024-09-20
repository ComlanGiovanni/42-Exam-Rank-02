/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:25:29 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/24 12:28:52 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	count_alen(char *str)
{
	int	length;

	length = 0;
	while (str[length] && str[length] != 'a')
		length++;
	return (length);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("%d-", count_alen("a"));
	printf("%d-", count_alen("wwwwa"));
	printf("%d-", count_alen("www  0 qq a qqwo"));
	printf("%d-", count_alen("Nothing here"));
	return (EXIT_SUCCESS);
}
*/
