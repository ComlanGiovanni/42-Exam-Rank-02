/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:31:39 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/24 14:54:31 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	size;

	size = 0;
	while (begin_list != NULL)
	{
		size++;
		begin_list = begin_list->next;
	}
	return (size);
}

/*			Other short or long way to do

int	ft_list_size(t_list *begin_list)
{
	if (begin_list)
		return (1 + ft_list_size(begin_list->next));
	return (0);
}

int	ft_list_size(t_list *begin_list)
{
	if (begin_list == NULL)
		return (0);
	else
		return (1 + ft_list_size(begin_list->next));
}

int	ft_list_size(t_list *begin_list)
{
	int		size;
	t_list	*list;

	size = 0;
	list = begin_list;
	while (list != NULL)
	{
		list = list->next;
		size++;
	}
	return (size);
}

t_list	*ft_new_node(void *data)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (node = NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

*/
