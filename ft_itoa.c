/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 10:08:21 by kbrown            #+#    #+#             */
/*   Updated: 2019/01/02 10:08:41 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_div_to_zero(int n)
{
	int		ctr;

	ctr = 0;
	while (n > 0)
	{
		n = n / 10;
		ctr++;
	}
	return (ctr);
}

static char	*ft_num_to_str(int n, int ctr, char *ptr, int neg)
{
	ptr[ctr] = '\0';
	while (n > 0)
	{
		ptr[ctr - 1] = (n % 10) + '0';
		n = n / 10;
		ctr--;
	}
	if (neg == 1)
		ptr[ctr - 1] = '-';
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		ctr;
	int		neg;

	ctr = 0;
	neg = 0;
	if (n == 0)
		ptr = "0";
	if (n == -2147483648)
		ptr = "-2147483648";
	if (n == 0 || n == -2147483648)
		return (ptr);
	if (n < 0)
	{
		neg = 1;
		n = (n * -1);
		ctr++;
	}
	ptr = (char*)malloc((ctr + (ft_div_to_zero(n) + 1)) * sizeof(char));
    if (!ptr)
        return (NULL);
	ctr = ft_div_to_zero(n) + neg;
	ft_num_to_str(n, ctr, ptr, neg);
	return (ptr);
}
