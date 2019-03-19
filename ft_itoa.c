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

char		*ft_itoa(int n)
{
	char	*ptr;
	int		ctr;
	int		neg;

	ctr = 0;
	neg = 0;
	ptr = NULL;
	if (n == 0 || n == -2147483648)
	{
		ptr = ft_size_eval(n, ptr);
		return (ptr);
	}
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
