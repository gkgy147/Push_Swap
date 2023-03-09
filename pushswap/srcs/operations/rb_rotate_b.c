/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_rotate_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:37:40 by grobert           #+#    #+#             */
/*   Updated: 2023/03/09 13:38:02 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* rb: rotate b - shift all elements of stack b by 1.
 * the first element becomes the last one. */
void	rb_rotate_b(t_stack *b, int flag)
{
    push_elem_bottom(b, new_elem(b->top->data));
    pop_elem(b);
    if (!flag)
        ft_putstr("rb\n");
}