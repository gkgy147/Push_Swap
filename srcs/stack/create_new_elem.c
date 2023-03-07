/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_new_elem.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:57:05 by grobert           #+#    #+#             */
/*   Updated: 2023/03/07 23:44:08 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node  *new_elem(int data)
{
    t_node *new;

    new = malloc(sizeof(t_node));
    if (!new)
        return (NULL);
    new->data = data;
    new->above = NULL;
    new->bellow = NULL;
    return (new);
}