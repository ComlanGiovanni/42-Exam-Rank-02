/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:06:11 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/12 18:35:48 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str)
{
	int		idx;
	int		j;
	int		k;
	char	**split;

	idx = 0;
	k = 0;
	if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[idx] == ' ' || str[idx] == '\t' || str[idx] == '\n')
		idx++;
	while (str[idx] != '\0')
	{
		j = 0;
		if (!(split[k] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		while (str[idx] != ' ' && str[idx] != '\t' && str[idx] != '\n' && str[idx])
			split[k][j++] = str[idx++];
		while (str[idx] == ' ' || str[idx] == '\t' || str[idx] == '\n')
			idx++;
		split[k][j] = '\0';
		k++;
	}
	split[k] = NULL;
	return (split);
}

#include <stdio.h>

int	main(void)
{
	int		idx;
	char	**tab;

	idx = 0;
	tab = ft_split("The prophecy is true");
	while (idx < 4)
	{
		printf("String %d : %s\n", idx, tab[idx]);
		idx++;
	}
	return (0);
}
