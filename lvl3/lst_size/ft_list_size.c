/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:02:01 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/23 15:29:29 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*create_elem(void *data);
void	list_push_front(t_list **begin_list, void *data);
int	ft_list_size(t_list *begin_list);

int	ft_list_size(t_list *begin_list)
{
	int	c = 0;

	if (!begin_list)
		return (c);
	while (begin_list)
	{
		begin_list = begin_list->next;
		c++;
	}
	return (c);
}



int main(void)
{
    t_list *list = NULL;

    list_push_front(&list, (void*)42);
    list_push_front(&list, (void*)24);
    list_push_front(&list, (void*)84);
	list_push_front(&list, (void*)12312);


    int size = ft_list_size(list);
    printf("List size: %d\n", size);
    t_list *tmp;
    while (list != NULL)
    {
        tmp = list;
        list = list->next;
        free(tmp);
    }

    return 0;
}


t_list *create_elem(void *data)
{
    t_list *new_elem = malloc(sizeof(t_list));
    if (!new_elem)
        return NULL;
    new_elem->data = data;
    new_elem->next = NULL;
    return new_elem;
}

void list_push_front(t_list **begin_list, void *data)
{
    t_list *new_elem = create_elem(data);
    if (new_elem)
    {
        new_elem->next = *begin_list;
        *begin_list = new_elem;
    }
}
