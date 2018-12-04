/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:45:34 by kbrown            #+#    #+#             */
/*   Updated: 2018/11/12 12:48:50 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_atoi(const char *str)
{
    int    i;
    int    int_nbr;
    int   frst_nmbr;
    int   last_nmbr;
    int   is_neg;
    
    i = 0;
    int_nbr = 0;
    frst_nmbr = 0;
    last_nmbr = 0;
    is_neg = 0;
    
    while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
        i++;
    if (str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9')
    {
        is_neg = 1;
        i++;
    }
    if (str[i] == '+' && str[i + 1] >= '0' && str[i + 1] <= '9')
    {
        is_neg = 0;
        i++;
    }
    if ((str[i] == '+' || str[i] == '-') && !(str[i + 1] >= '0' && str[i + 1] <= '9'))
        return (0);
    
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        int_nbr = (int_nbr * 10);
        int_nbr = (int_nbr + (str[i] - '0'));
        i++;
    }
    if (is_neg == 1)
    {
        return (-int_nbr);
    }
    else
        return (int_nbr);
}

// if it hits + or -, it expects next to be number, if not, its over...
