/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_empty.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:46:35 by grobert           #+#    #+#             */
/*   Updated: 2023/03/09 13:46:40 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* a funciton to check if stack empty or not */
int	is_empty(t_stack *stack)
{
	return (stack->top == NULL && stack->bottom == NULL);
}