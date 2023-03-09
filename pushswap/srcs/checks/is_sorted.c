/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:47:35 by grobert           #+#    #+#             */
/*   Updated: 2023/03/09 13:47:45 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* is_sorted: a function to check if stack is sorted or not */
int	is_sorted(t_stack stack)
{
	if (is_empty(&stack))
		return (1);
	while (stack.top->bellow)
	{
		if (stack.top->data > stack.top->bellow->data)
			return (0);
		stack.top = stack.top->bellow;
	}
	return (1);
}