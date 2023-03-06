/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_elem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:54:48 by grobert           #+#    #+#             */
/*   Updated: 2023/03/06 10:58:51 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pop_elem(t_stack *stack)
{
    t_node  *tmp;

    if (!is_empty(stack))
    {
        tmp = stack->top;
        stack->top = stack->top->bellow;
        if (stack->size == 1)
        {
            stack->top = NULL;
            stack->bottom = NULL;
        }
        else
            stack->top->above = NULL;
        stack->size--;
        free(tmp);
    }
}