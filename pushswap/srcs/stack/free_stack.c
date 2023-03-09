/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:24:45 by grobert           #+#    #+#             */
/*   Updated: 2023/03/09 13:26:52 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* free_stack: a function to free everything before exiting */
void	free_stack(t_stack *stack)
{
	while (!is_empty(stack))
		pop_elem(stack);
	free(stack);
}