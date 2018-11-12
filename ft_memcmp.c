/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:24:07 by kbrown            #+#    #+#             */
/*   Updated: 2018/11/12 13:24:10 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*ptr_s1;
	char	*ptr_s2;
	
	ptr_s1 = s1;
	ptr_s2 = s2;
	i = 0;
	while (ptr_s1[i] == ptr_s2[i] && i < n)
	{
		i++;
	}
	return ((unsigned char)ptr_s1[i] - (unsigned char)ptr_s2[i]);
}
