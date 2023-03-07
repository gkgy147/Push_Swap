/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:11:00 by grobert           #+#    #+#             */
/*   Updated: 2023/03/06 16:29:16 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     get_max(t_stack *stack)
{
    t_node  *tmp;
    int         max;

    tmp = stack->top;
    max = tmp->data;
    while (tmp->bellow)
    {
        tmp = tmp->bellow;
        if (max < tmp->data)
                max = tmp->data;
    }
    return (max);
}