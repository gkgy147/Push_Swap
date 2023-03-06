/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb_reverse_rotate_b.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:31:37 by grobert           #+#    #+#             */
/*   Updated: 2023/03/06 13:34:34 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rrb_reverse_rotate_b(t_stack *b, int flag)
{
    push_elem(b, new_elem(b->bottom->data));
    poop_elem(b);
    if (!flag)
        ft_putstr("rrb\n");
}