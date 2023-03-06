/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:38:29 by grobert           #+#    #+#             */
/*   Updated: 2023/03/06 13:43:13 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa_swap_a(t_stack *a, int flag)
{
    int     tmp;

    if(is_empty(a))
        return ;
    tmp = a->top->data;
    a->top->data = a->top->bellow->data;
    a->top->bellow->data = tmp;
    if (!flag)
        ft_putstr("sa\n");
}