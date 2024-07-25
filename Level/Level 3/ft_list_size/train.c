/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:58:26 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 10:58:28 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#include <stdlib.h> // For malloc
#include <stdio.h> // For printf

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

int	main(void)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;
	t_list	*fourth;
	t_list	*solo;

	first = ft_new_node("One");
	second = ft_new_node("Two");
	third = ft_new_node((void *)3);
	fourth = ft_new_node("Four");
	solo = ft_new_node("Solo");
	first->next = second;
	second->next = third;
	third->next = fourth;
	printf("%d\n", ft_list_size(first));
	printf("%d\n", ft_list_size(second));
	printf("%d\n", ft_list_size(third));
	printf("%d\n", ft_list_size(solo));
	printf("%d\n", ft_list_size(NULL));
	printf("%d\n", ft_list_size(fourth));
	return (0);
}
/*		Small not for later

first->next = ft_new_elem("One");
first->next->next = ft_new_elem("Two");
again && again
or a fct loop
with this fct for exemple ft_list_push_front(t_list **begin_list, void *data)

*/
