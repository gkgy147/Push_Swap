/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_elem_bottom.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:50:33 by grobert           #+#    #+#             */
/*   Updated: 2023/03/07 23:45:27 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_elem_bottom(t_stack *stack, t_node *elem)
{
    if (!is_empty(stack))
    {
        elem->above = stack->bottom;
        stack->bottom->bellow = elem;
    }
    else
        stack->top = elem;
    stack->bottom = elem;
    stack->size++;
}