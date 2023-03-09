/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_elem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:24:57 by grobert           #+#    #+#             */
/*   Updated: 2023/03/09 13:26:10 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_elem(t_stack *stack, t_node *elem)
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