/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 10:16:58 by kbrown            #+#    #+#             */
/*   Updated: 2019/01/02 10:17:00 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int i;

	i = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
	}
	while (n > 10)
	{
		ft_putnbr(n / 10);
		n = (n % 10) + '0';
		write(1, &n, 1);
		return ;
	}
	n = (n % 10) + '0';
	write(1, &n, 1);
}
/*
**recursively divides until n is < 10
**subsequent recursions, take remainder (last #)
**first recursion, take remainder (last #)
*/
