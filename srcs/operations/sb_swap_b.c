/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:43:17 by grobert           #+#    #+#             */
/*   Updated: 2023/03/06 13:43:54 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb_swap_b(t_stack *b, int flag)
{
	int	tmp;

	if (is_empty(b))
		return ;
	tmp = b->top->data;
	b->top->data = b->top->bellow->data;
	b->top->bellow->data = tmp;
	if (!flag)
		ft_putstr("sb\n");
}