/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_elem_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:24:15 by grobert           #+#    #+#             */
/*   Updated: 2023/03/06 16:29:09 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     get_elem_index(t_stack a, int elem)
{
    int     index;

    index = 0;
    if (!a.top)
        return (-1);
    while (a.top && a.top->data != elem)
    {
        a.top = a.top->bellow;
        index++;
    }
    return (index);
}