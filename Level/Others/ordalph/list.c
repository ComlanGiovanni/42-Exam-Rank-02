#include "ordalph.h"
#include <stdlib.h>

t_words		*new_words(char *str)
{
	t_words		*words;

	if (!(words = (t_words *)malloc(sizeof(t_words))))
		return (NULL);
	words->str = str;
	words->next = NULL;
	return (words);
}

t_list		*new_list(int len, t_words *words)
{
	t_list	*list;

	if (!(list = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	list->words = words;
	list->len = len;
	list->next = NULL;
	return (list);
}

void		push_list(t_list **begin, t_list *new)
{
	t_list		*tmp;
	t_list		*prev;

	if ((*begin) == NULL)
		*begin = new;
	else
	{
		prev = NULL;
		tmp = *begin;
		while (tmp)
		{
			if (new && tmp->len > new->len)
			{
				new->next = tmp;
				break ;
			}
			prev = tmp;
			tmp = tmp->next;
		}
		if (prev)
			prev->next = new;
		else
			*begin = new;
	}
}

void		push_words(t_words **begin, t_words *new)
{
	t_words		*tmp;
	t_words		*prev;

	if ((*begin) == NULL)
		*begin = new;
	else
	{
		prev = NULL;
		tmp = *begin;
		while (tmp)
		{
			if (new && new->str && ft_strcmp(tmp->str, new->str) > 0)
			{
				new->next = tmp;
				break ;
			}
			prev = tmp;
			tmp = tmp->next;
		}
		if (prev)
			prev->next = new;
		else
			*begin = new;
	}
}

void		add_word(t_list **begin, char *str)
{
	t_list	*tmp;

	tmp = *begin;
	while (tmp)
	{
		if (tmp->len == ft_strlen(str))
		{
			push_words(&(tmp->words), new_words(str));
			return ;
		}
		tmp = tmp->next;
	}
	tmp = new_list(ft_strlen(str), new_words(str));
	push_list(begin, tmp);
}
