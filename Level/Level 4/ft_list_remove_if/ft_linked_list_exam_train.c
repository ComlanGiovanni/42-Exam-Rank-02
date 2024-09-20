/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list_exam_train.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:51:12 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/20 12:21:10 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> //size_t
#include <stdlib.h> //malloc
#include <unistd.h> //STDOUT_FILENO, write

typedef struct s_list	t_list;

struct					s_list
{
	void				*data;
	struct s_list		*next;
};

static void	ft_putchar_fd(char character, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static size_t	ft_list_size(t_list *list)
{
	size_t	size;

	size = 0x0;
	while (list != NULL)
	{
		size++;
		list = list->next;
	}
	return (size);
}

static void	ft_small_put_nbr(int number)
{
	if (number > 0x9)
	{
		ft_small_put_nbr(number / 0xa);
		ft_small_put_nbr(number % 0xa);
	}
	else
		ft_putchar_fd((number + '0'), STDOUT_FILENO);
}

static void	ft_putstr_fd(char *str, int fd)
{
	if (fd >= 0x0)
		while (*str)
			write(fd, str++, sizeof(char));
}

t_list	*ft_list_last(t_list **lst)
{
	if (*lst == NULL)
		return (NULL);
	while (*lst)
	{
		if ((*lst)->next == NULL)
			return (*lst);
		*lst = (*lst)->next;
	}
	return (*lst);
}

void	ft_list_add_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
}

static void	ft_append_to_list(t_list **list, t_list *element)
{
	if (*list == NULL)
		*list = element;
	else
		ft_list_add_back(list, element);
}

static void	ft_free_allocation(t_list *list, int number_of_element)
{
	t_list	*current;
	t_list	*next;

	current = list;
	while (number_of_element > 0x0 && current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
		number_of_element--;
	}
	exit(EXIT_FAILURE);
}

static t_list	*ft_new_element(void *data)
{
	t_list	*element;

	element = (t_list *)malloc(sizeof(t_list));
	if (!element)
		return (NULL);
	element->data = data;
	element->next = NULL;
	return (element);
}

static t_list	*ft_create_linked_list(int argc, char **argv)
{
	size_t	index;
	t_list	*new_list;
	t_list	*current;

	index = 0x0;
	new_list = NULL;
	current = NULL;
	while (argc--)
	{
		current = ft_new_element(argv[index]);
		if (!current)
			ft_free_allocation(new_list, index);
		ft_append_to_list(&new_list, current);
		index++;
	}
	return (new_list);
}

static void	ft_list_foreach(t_list *begin_list, void (*f)(void *, int))
{
	while (begin_list != NULL)
	{
		if (begin_list->data)
			(*f)(begin_list->data, STDOUT_FILENO);
		begin_list = begin_list->next;
	}
}

static void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd(0x0a, fd);
}

static int	ft_strcmp(char *s1, char *s2)
{
	while (*s1++ == *s2++)
		if (!*s1 && !*s2)
			return (0x0);
	return (*--s1 - *--s2);
}

static void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;

	if ((*begin_list == NULL) || (begin_list == NULL))
		return ;
	if (cmp((*begin_list)->data, data_ref) == 0x0)
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tmp);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
		ft_list_remove_if(&((*begin_list)->next), data_ref, cmp);
}

static size_t ft_strlen(char *string)
{
	const char *last_char_string_pointer = string;

	last_char_string_pointer = string;
	if (!string)
		return (0x0);
	while (*last_char_string_pointer != '\0')
		last_char_string_pointer++;
	return (last_char_string_pointer - string);
}

static int ft_ascending(void *a, void *b)
{
	return ((ft_strlen((char *)a) <= ft_strlen((char *)b)));
}

static void 	ft_swap_void(void **a, void **b)
{
	void	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static t_list *ft_sort_list(t_list *lst, int(*cmp)(void*, void *))
{
	t_list *tmp;

	tmp = lst;
	while (lst->next != NULL)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0x0)
		{
			ft_swap_void(&lst->data, &lst->next->data);
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}

static void	ft_linked_list(int argc, char **argv)
{
	t_list	**begin_list;
	t_list	*my_list;

	begin_list = &my_list;
	my_list = ft_create_linked_list(argc, argv);
	ft_putstr_fd("-------------------------------------\n", STDOUT_FILENO);
	ft_putstr_fd("Size of the linked list : ", STDOUT_FILENO);
	ft_small_put_nbr(ft_list_size(my_list));
	ft_putchar_fd('\n', STDOUT_FILENO);
	ft_list_foreach(my_list, (void *)ft_putendl_fd);
	my_list = ft_sort_list(my_list, ft_ascending);
	ft_putchar_fd('\n', STDOUT_FILENO);
	ft_list_remove_if(begin_list, "delete", ft_strcmp);
	ft_list_foreach(my_list, (void *)ft_putendl_fd);
	ft_free_allocation(my_list, ft_list_size(my_list));
}

int	main(int argc, char **argv)
{
	if (argc > 0x1)
		ft_linked_list(argc, argv);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}
