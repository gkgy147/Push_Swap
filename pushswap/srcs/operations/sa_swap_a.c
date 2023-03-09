/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:34:34 by grobert           #+#    #+#             */
/*   Updated: 2023/03/09 13:41:12 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* sa: swap a - swap the first 2 elements at the top of stack a. 
 * (do nothing if there is only one or no elements). */
void	sa_swap_a(t_stack *a, int flag)
{
	int	tmp;

	if (is_empty(a))
		return ;
	tmp = a->top->data;
	a->top->data = a->top->bellow->data;
	a->top->bellow->data = tmp;
	if (!flag)
		ft_putstr("sa\n");
}