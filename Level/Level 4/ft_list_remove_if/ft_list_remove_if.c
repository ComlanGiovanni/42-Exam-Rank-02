/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:06:11 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 15:11:26 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h> // For Free

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;

	if ((begin_list == NULL) || (*begin_list == NULL))
		return ;
	current = *begin_list;
	if (cmp(current->data, data_ref) == 0)
	{
		*begin_list = current->next;
		free(current);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	current = *begin_list;
	ft_list_remove_if(&current->next, data_ref, cmp);
}
