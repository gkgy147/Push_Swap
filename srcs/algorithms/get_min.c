/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:16:25 by grobert           #+#    #+#             */
/*   Updated: 2023/03/07 23:59:39 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     get_min(t_stack *stack)
{
    t_node  *tmp;
    int     min;

    tmp = stack->top;
    min = tmp->data;
    while (tmp->bellow)
    {
        tmp = tmp->bellow;
        if (min > tmp->data)
            min = tmp->data;
    }
    return (min);
}