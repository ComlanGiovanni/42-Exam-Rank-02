/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   laink.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:01:08 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/17 13:50:53 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h> // EXIT_SUCCESS EXIT_FAILURE exit
#include <unistd.h> // STDOUT_FILENO, STDINT_FILENO, STDERR_FILENO stddef.h

typedef struct s_list	t_list;

struct					s_list
{
	void				*data;
	struct s_list		*next;
};

static void				ft_linked_list(int argc, char **argv);
static t_list			*ft_create_linked_list(int argc, char **argv);
static t_list			*ft_new_element(void *data);
static void				ft_free_allocation(t_list *new_list,
							int number_of_element);
static void				ft_display_linked_list(t_list *linked_list);
static void				ft_putchar_fd(char character, int file_descriptor);
static size_t			ft_list_size(t_list *linked_list);
static void				ft_putstr_fd(char *string, int file_descriptor);
static void				ft_list_foreach(t_list *begin_list, void (*f)(void *,
								int));
static void				ft_putendl_fd(char *s, int fd);
static void				ft_swap_void(void **a, void **b);
static t_list			*ft_sort_list(t_list *lst, int (*cmp)(void *, void *));
static int				ft_ascending(void *a, void *b);
static size_t			ft_strlen(char *string);
static void				ft_list_remove_if(t_list **begin_list, void *data_ref,
							int (*cmp)());
static int				ft_strcmp(char *s1, char *s2);
static void				ft_small_put_nbr(int number);

int	main(int argc, char **argv)
{
	if (argc > 0x1)
		ft_linked_list(argc, argv);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
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
	ft_putchar_fd('\n', STDOUT_FILENO);
	ft_display_linked_list(my_list);
	ft_putchar_fd('\n', STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
	ft_list_foreach(my_list, (void *)ft_putendl_fd);
	ft_putstr_fd("-------------------------------\n", STDOUT_FILENO);
	my_list = ft_sort_list(my_list, ft_ascending);
	ft_putstr_fd("Sorting by length....................\n", STDOUT_FILENO);
	ft_putstr_fd("-------------------------------------\n", STDOUT_FILENO);
	ft_putstr_fd("Size of the linked list : ", STDOUT_FILENO);
	ft_display_linked_list(my_list);
	ft_list_foreach(my_list, (void *)ft_putendl_fd);
	ft_putstr_fd("-------------------------------\n", STDOUT_FILENO);
	ft_list_remove_if(begin_list, "./a.out", ft_strcmp);
	ft_display_linked_list(my_list);
	ft_list_foreach(my_list, (void *)ft_putendl_fd);
	ft_putstr_fd("-------------------------------\n", STDOUT_FILENO);
	ft_list_remove_if(begin_list, "9", ft_strcmp);
	ft_display_linked_list(my_list);
	ft_list_foreach(my_list, (void *)ft_putendl_fd);
	ft_putstr_fd("-------------------------------\n", STDOUT_FILENO);
	ft_free_allocation(my_list, ft_list_size(my_list));
}

static t_list	*ft_create_linked_list(int argc, char **argv)
{
	size_t	index;
	t_list	*new_list;
	t_list	*current;
	t_list	*temp;

	index = 0x0;
	new_list = NULL;
	current = NULL;
	temp = NULL;
	while (argc--)
	{
		current = ft_new_element(argv[index]);
		if (!current)
			ft_free_allocation(new_list, index);
		if (new_list == NULL)
			new_list = current;
		else
		{
			temp = new_list;
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = current;
		}
		index++;
	}
	return (new_list);
}

// {
// inverse
// 	size_t	index;
// 	t_list *new_list;
// 	t_list *current;

// 	index = 0x0;
// 	new_list = NULL;
// 	current = NULL;
// 	while (argc--)
// 	{
// 		current = ft_new_element(argv[index]);
// 		if (!current)
// 			ft_free_allocation(new_list, index);
// 		if (new_list == NULL)
// 			new_list = current;
// 		else
// 			current->next = new_list;
// 		new_list = current;
// 		index++;
// 	}
// 	return (new_list);
// }

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

static void	ft_list_foreach(t_list *begin_list, void (*f)(void *, int))
{
	while (begin_list != NULL)
	{
		if (begin_list->data)
			(*f)(begin_list->data, STDOUT_FILENO);
		begin_list = begin_list->next;
	}
}

static void	ft_display_linked_list(t_list *list)
{
	while (list->next != NULL)
	{
		ft_putchar_fd('[', STDOUT_FILENO);
		ft_putstr_fd((char *)list->data, STDOUT_FILENO);
		ft_putchar_fd(']', STDOUT_FILENO);
		ft_putstr_fd("->", STDOUT_FILENO);
		list = list->next;
	}
	ft_putstr_fd((char *)list->data, STDOUT_FILENO);
	list = list->next;
	if (list == NULL)
		ft_putstr_fd("->[NULL]\n", STDOUT_FILENO);
}

// static void	ft_display_linked_list(t_list *list)
// {
// 	t_list	*current;

// 	current = list;
// 	while (current != NULL)
// 	{
// 		ft_putchar_fd('[', STDOUT_FILENO);
// 		ft_putstr_fd((char *)current->data, STDOUT_FILENO);
// 		ft_putchar_fd(']', STDOUT_FILENO);
// 		ft_putstr_fd("->", STDOUT_FILENO);
// 		current = current->next;
// 	}
// 	if (current == NULL)
// 		ft_putstr_fd("[NULL]\n", STDOUT_FILENO);
// }

// static void	ft_display_linked_list(t_list *linked_list)
// {
// 	t_list	*current;

// 	current = linked_list;
// 	while (current != NULL)
// 	{
// 		printf("[%s]->", (char *)current->data);
// 		current = current->next;
// 	}
// 	if (current == NULL)
// 		printf("[NULL]\n");
// }

// static size_t	ft_list_size(t_list *linked_list)
// {
// 	if (linked_list)
// 		return (1 + ft_list_size(linked_list->next));
// 	return (0x0);
// }

static size_t	ft_list_size(t_list *list)
{
	size_t	size;

	size = 0;
	while (list->next != NULL)
	{
		size++;
		list = list->next;
	}
	return (size);
}


static void	ft_putchar_fd(char character, int file_descriptor)
{
	if (file_descriptor >= 0x0)
		write(file_descriptor, &character, sizeof(char));
}

static void	ft_putstr_fd(char *str, int fd)
{
	if (fd >= 0x0)
		while (*str)
			write(fd, str++, sizeof(char));
}

static void	ft_small_put_nbr(int number)
{
	if (number > 9)
	{
		ft_small_put_nbr(number / 10);
		ft_small_put_nbr(number % 10);
	}
	else
		ft_putchar_fd((number + '0'), STDOUT_FILENO);
}

static void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd(0x0a, fd);
}

static void	ft_swap_void(void **a, void **b)
{
	void	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static t_list	*ft_sort_list(t_list *lst, int (*cmp)(void *, void *))
{
	t_list	*tmp;

	tmp = lst;
	while (lst->next != NULL)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
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

static int	ft_ascending(void *a, void *b)
{
	return ((ft_strlen((char *)a) <= ft_strlen((char *)b)));
}

static size_t	ft_strlen(char *string)
{
	const char	*last_char_string_pointer;

	last_char_string_pointer = string;
	if (!string)
		return (0x0);
	while (*last_char_string_pointer != '\0')
		last_char_string_pointer++;
	return (last_char_string_pointer - string);
}

static void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;

	if (*begin_list == NULL)//begin_list == NULL ||
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

// static void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
// {
// 	t_list	*current;
// 	t_list	*temp;

// 	if (begin_list == NULL || *begin_list == NULL)
// 		return ;
// 	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
// 	{
// 		temp = *begin_list;
// 		*begin_list = (*begin_list)->next;
// 		free(temp);
// 	}
// 	current = *begin_list;
// 	while (current && current->next)
// 	{
// 		if (cmp(current->next->data, data_ref) == 0)
// 		{
// 			temp = current->next;
// 			current->next = current->next->next;
// 			free(temp);
// 		}
// 		else
// 			current = current->next;
// 	}
// }

   // t_list *temp;

    // if (*begin_list == NULL)
    //     return;

    // if (cmp((*begin_list)->data, data_ref) == 0)
    // {
    //     temp = *begin_list;
    //     *begin_list = (*begin_list)->next;
    //     free(temp);
    //     ft_list_remove_if(begin_list, data_ref, cmp);
    // }
    // else
    //     ft_list_remove_if(&((*begin_list)->next), data_ref, cmp);


static int	ft_strcmp(char *s1, char *s2)
{
	while (*s1++ == *s2++)
		if (!*s1 && !*s2)
			return (0x0);
	return (*--s1 - *--s2);
}
