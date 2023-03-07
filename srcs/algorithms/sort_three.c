/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:16:10 by grobert           #+#    #+#             */
/*   Updated: 2023/03/07 23:59:24 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_three(t_stack *a)
{
    int     min;

    min = get_elem_index(*a, get_min(a));
    if (min == 1)
    {
        if (a->top->data > a->bottom->data)
                ra_rotate_a(a, false);
        else
                sa_swap_a(a, false);
            
    }
    else if (min == 2)
    {
        if (a->top->data > a->bottom->data)
        {
            sa_swap_a(a,false);
            rra_reverse_rotate_a(a, false);
        }
        else
            rra_reverse_rotate_a(a, false);
    }
    else
    {
        sa_swap_a(a, false);
        ra_rotate_a(a, false);
    }
}