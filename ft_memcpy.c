/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 11:23:39 by kbrown            #+#    #+#             */
/*   Updated: 2018/11/05 11:57:06 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t      i;
    const char	*ptr_src;
    char        *ptr_dst;
    
    ptr_dst = dst;
    ptr_src = src;
    i = 0;
    while (i < n)
    {
        ptr_dst[i] = ptr_src[i];
        i++;
    }
    return (dst); //need to return original value of dst
}
