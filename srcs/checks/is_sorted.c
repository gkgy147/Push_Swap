/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:51:20 by grobert           #+#    #+#             */
/*   Updated: 2023/03/07 23:49:12 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     is_sorted(t_stack stack)
{
    if (is_empty(&stack))
        return (1);
    while (stack.top->bellow)
    {
        if (stack.top->data > stack.top->bellow->data)
                return (0);
        stack.top = stack.top->bellow;
    }
    return (1);
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 