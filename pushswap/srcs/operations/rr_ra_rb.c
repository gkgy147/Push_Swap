/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_ra_rb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:34:27 by grobert           #+#    #+#             */
/*   Updated: 2023/03/09 13:38:41 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* rr: rotate a and rotate b at the same time. */
void	rr_ra_rb(t_stack *a, t_stack *b)
{
	ra_rotate_a(a, true);
	rb_rotate_b(b, true);
	ft_putstr("rr\n");
}