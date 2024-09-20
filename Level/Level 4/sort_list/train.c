/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:05:50 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/19 12:23:18 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*tmp;

	tmp = lst;
	while (lst->next != NULL)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			ft_swap(&lst->data, &lst->next->data);
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}

/*		Main Test

#include <unistd.h> // For write // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}

int	ascending(int a, int b)
{
	return (a <= b);
}

t_list	*ft_new_elem(int data)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (node = NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

void	ft_list_foreach_space(t_list *begin_list, void (*f)(int))
{
	while (begin_list != NULL)
	{
		if (begin_list->data)
			(*f)(begin_list->data);
		ft_putchar(' ');
		begin_list = begin_list->next;
	}
}

int	main(void)
{
	t_list	*test_list;

	test_list = ft_new_elem(42);
	test_list->next = ft_new_elem(666);
	test_list->next->next = ft_new_elem(69);
	test_list->next->next->next = ft_new_elem(420);
	test_list->next->next->next->next = ft_new_elem(669);
	test_list->next->next->next->next->next = ft_new_elem(42);
	test_list->next->next->next->next->next->next = ft_new_elem(0);
	ft_list_foreach_space(test_list, (void *)ft_putnbr);
	sort_list(test_list, ascending);
	ft_putchar('\n');
	ft_list_foreach_space(test_list, (void *)ft_putnbr);
	ft_putchar('\n');
	return (0);
}

*/
