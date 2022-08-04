/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subject.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:41:00 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/05 01:47:38 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                t_list;



#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	if (begin_list == 0)
		return (0);
	else
		return (1 + ft_list_size(begin_list->next));
}





int		ft_list_size(t_list *begin_list)
{
	t_list *list;
	int i;

	list = begin_list;
	i = 0;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}
