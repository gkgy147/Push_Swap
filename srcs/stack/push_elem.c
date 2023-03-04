/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_elem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:07:54 by grobert           #+#    #+#             */
/*   Updated: 2023/02/18 17:25:21 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_elem(t_stack *stack, t_node *elem)
{
    if (!is_empty(stack))
    {
        elem->bellow = stack->top;
        stack->top->above = elem;
    }
    else
            stack->bottom = elem;
    stack->top = elem;
    stack->size++;
}