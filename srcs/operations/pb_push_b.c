/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:53:36 by grobert           #+#    #+#             */
/*   Updated: 2023/03/06 12:57:04 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pb_push_b(t_stack *a, t_stack *b)
{
    if (!is_empty(a))
        return ;
    push_elem(b, new_elem(a->top->data));
    pop_elem(a);
    ft_putstr("pb\n");
}