/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:44:39 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/09 18:32:31 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		size;
	t_list	*list;

	list = begin_list;
	size = 0;
	while (list)
	{
		list = list->next;
		size++;
	}
	return (size);
}
/*
#include <stdio.h>
#include <stdlib.h>

t_list	*new(void *data)
{
	t_list	*n;

	n = (t_list *)malloc(sizeof(t_list));
	if (n)
	{
		n->data = data;
		n->next = NULL;
	}
	return (n);
}

int	main(void)
{
	t_list	*list;
	t_list	*s;
	t_list	*j;
	t_list	*t;

	list = new("One");
	s = new("Two");
	j = new("Three");
	t = new("Four");
	list->next = s;
	s->next = j;
	j->next = t;
	printf("%d", ft_list_size(list));
	return (0);
}
*/
/*
int	ft_list_size(t_list *begin_list)
{
	if (begin_list == 0)
		return (0);
	else
		return (1 + ft_list_size(begin_list->next));
}
*/
