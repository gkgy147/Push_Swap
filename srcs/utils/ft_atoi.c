/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <grobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:11:31 by grobert           #+#    #+#             */
/*   Updated: 2023/03/06 15:28:08 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int      ft_isspace(char c)
{
    if (c == ' ' || c == '\t' || c == '\v'
            || c == '\r' || c == '\f' || c == '\n')
        return (1);
    return (0);
}

long    ft_atoi(const char *str)
{
    long    res;
    int             sign;
    int             i;

    i = 0;
    sign = 1;
    res = 0;
    while (ft_isspace(str[i]))
            i++;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
    i++;
    while (str[i] >= '0' && str[i] <= '9')
        res = (res * 10) + (str[i++] - '0');
    return (res * sign); 
}