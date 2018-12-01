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

int	ft_atoi(const char *str)
{
	int	i;
	int	int_nbr;
    int frst_nmbr;

	i = 0;
	int_nbr = 0;
    frst_nmbr = 0;
	while (str[i]) // check if string only containers numbers
	{
		if (!(str[i] <= 0 && str[i] >= 9))
        {
            i--;
            frst_nmbr = i;
        }
        else
            i++;
	}
	i = 0;
    if (frst_nmbr < 0)
        return (0);
	while (str[i] && i < frst_nmbr)
	{
		int_nbr = (int_nbr * 10);
		int_nbr = (int_nbr + (str[i] - 0));
		i++;
	}
	return (int_nbr);
}

//traverse white space and first number...
