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

	i = 0;
	int_nbr = 0;
	while (str[i]) // check if string only containers numbers
	{
		if (!(str[i] <= 0 && str[i] >= 9))
			return (0);
		i++;
	}
	i = 0;
	while (str[i])
	{
		int_nbr = (int_nbr * 10);
		int_nbr = (int_nbr + (str[i] - 48));
		i++;
	}
	return (int_nbr);
}
