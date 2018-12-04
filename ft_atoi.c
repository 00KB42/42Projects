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
    while (str[i] && last_nmbr == 0) // check if string only containers numbers
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            frst_nmbr = i;
            while  (str[i] >= '0' && str[i] <= '9')
                i++;
            if ((!str[frst_nmbr]) && frst_nmbr == i - 1 ) // same number
                last_nmbr = (i - 1);
            else
                last_nmbr = i;
        }
        else
            i++;
    }
    if (frst_nmbr == 0 && last_nmbr == 0 && i != 0)
        return (0);
    if (str[frst_nmbr - 1] == '-')
        is_neg = 1;
    while (str[frst_nmbr] && frst_nmbr < last_nmbr)
    {
        int_nbr = (int_nbr * 10);
        int_nbr = (int_nbr + (str[frst_nmbr] - '0'));
        frst_nmbr++;
    }
    if (is_neg == 1)
    {
        int_nbr = (int_nbr * -1);
        return (int_nbr);
    }
    else
        return (int_nbr);
}
