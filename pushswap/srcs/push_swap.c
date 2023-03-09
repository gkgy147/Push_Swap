/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:22:19 by grobert           #+#    #+#             */
/*   Updated: 2023/03/09 14:02:19 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac == 1)
		exit (EXIT_FAILURE);
	a = stack_init();
	b = stack_init();
	get_input(a, b, av + 1, ac - 1);
	if (a->size == 3)
		sort_three(a);
	else if (a->size == 5 || a->size == 4)
		naive_sort(a, b);
	else
		chunks_sort(a, b);
	free_stack(a);
	free_stack(b);
	exit (EXIT_SUCCESS);
}