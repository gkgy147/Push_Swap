/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:57:48 by grobert           #+#    #+#             */
/*   Updated: 2023/03/06 13:00:36 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra_rotate_a(t_stack *a, int flag)
{
    push_elem_bottom(a, new_elem(a->top->data));
    pop_elem(a);
    if (!flag)
        ft_putstr("ra\n");
}