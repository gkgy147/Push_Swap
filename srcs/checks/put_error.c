/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 12:02:53 by grobert           #+#    #+#             */
/*   Updated: 2023/03/06 12:05:04 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    put_error(char  *msg)
{
    while (*msg)
        write(2, msg++, 1);
    exit(EXIT_FAILURE);
}