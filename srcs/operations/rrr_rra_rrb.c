/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr_rra_rrb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:34:38 by grobert           #+#    #+#             */
/*   Updated: 2023/03/07 23:48:56 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rrr_rra_rrb(t_stack *a, t_stack *b)
{
    rra_reverse_rotate_a(a, true);
    rrb_reverse_rotate_b(b, true);
    ft_putstr("rrr\n");
}