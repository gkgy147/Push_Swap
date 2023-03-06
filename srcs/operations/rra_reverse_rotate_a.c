/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_reverse_rotate_a.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:27:57 by grobert           #+#    #+#             */
/*   Updated: 2023/03/06 13:30:36 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rra_reverse_rotate_a(t_stack *a, int flag)
{
    push_elem(a, new_elem(a->bottom->data));
    poop_elem(a);
    if (!flag)
        ft_putstr("rra\n");
}