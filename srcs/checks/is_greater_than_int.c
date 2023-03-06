/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_greater_than_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:24:41 by grobert           #+#    #+#             */
/*   Updated: 2023/03/06 11:36:48 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int      is_greater(char *arg)
{
    return (ft_atoi(arg) < INT_MIN || ft_atoi(arg) > INT_MAX);
}

int     is_greater_than_int(char **av, int size)
{
    int     i;

    i = -1;
    while (++i < size)
    {
        if (is_greater(av[i]))
                return (1);
    }
    return (0);
}