/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:36:01 by grobert           #+#    #+#             */
/*   Updated: 2023/03/09 13:36:24 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* pb: push b - take the first element of top of a and put it at the top of b.
 * (do nothing if a emepty). */
void	pb_push_b(t_stack *a, t_stack *b)
{
	if (is_empty(a))
		return ;
	push_elem(b, new_elem(a->top->data));
	pop_elem(a);
	ft_putstr("pb\n");
}