/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:00:16 by grobert           #+#    #+#             */
/*   Updated: 2023/02/22 16:40:06 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*pa- push the first number in b to top of a*/

void    pa_push_a(t_stack *a, t_stack *b)
{
    if (is_empty(b))
        return ;
        push_elem(a, new_elem(b->top->data));
        pop_elem(b);
        ft_putstr("pa/n");
}
