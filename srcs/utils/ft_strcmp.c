/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:30:04 by grobert           #+#    #+#             */
/*   Updated: 2023/03/08 00:20:35 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_strcmb(const char *s1, const char *s2)
{
    size_t      i;

    i = 0;
    while (s1[i] == s2[i] && s1[i] && s2[i])
        i++;
    return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}