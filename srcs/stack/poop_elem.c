/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poop_elem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:06:23 by grobert           #+#    #+#             */
/*   Updated: 2023/03/07 23:45:09 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    poop_elem(t_stack *stack)
{
    t_node  *tmp;

    if (!is_empty(stack))
    {
        tmp = stack->bottom;
        stack->bottom = stack->bottom->above;
        if (stack->size == 1)
        {
            stack->top = NULL;
            stack->bottom = NULL;
        }
        else
            stack->bottom->bellow = NULL;
        stack->size--;
        free(tmp);
    }
}