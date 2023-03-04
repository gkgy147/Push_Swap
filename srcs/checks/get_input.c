/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:15:46 by grobert           #+#    #+#             */
/*   Updated: 2023/02/28 23:23:11 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    get_input(t_stack *a, t_stack *b, char **av, int size)
{
    if (!is_integer(av, size) || is_greater_than_int(av, size)
            || is_duplicates(av, size))
            put_error("Error\n");
    while (size)
            push_elem(a, new_elem(ft_atoi(av[--size])));
    if (is_sorted(*a))
    {
        free_stack(a);
        free(b);
        exit(EXIT_SUCCESS);
    }
}