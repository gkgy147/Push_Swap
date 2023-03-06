/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_rotate_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:01:49 by grobert           #+#    #+#             */
/*   Updated: 2023/03/06 13:04:41 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rb_rotate_b(t_stack *b, int flag)
{
    push_elem_bottom(b, new_elem(b->top->data));
    pop_elem(b);
    if (!flag)
        ft_putstr("rb\n")
}