/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:27:27 by kbrown            #+#    #+#             */
/*   Updated: 2018/11/12 13:27:29 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
    size_t    src_ctr;
    size_t    dst_ctr;
    size_t    len;
    size_t    dst_orig;
    size_t    trunc_dtct;
    size_t    src_len;
    
    src_ctr = 0;
    dst_ctr = 0;
    len = 0;
    dst_orig = 0;
    trunc_dtct = 0;
    src_len = 0;
    
    while (src[src_len])
        src_len++;
    while (dst[dst_ctr])
    {
        dst_ctr++;
    }
    dst_orig = dst_ctr;
    if (dst_ctr > size)
        dst_orig = size;
    len = (size - dst_ctr - 1);
    if ((int)len < 0)
    {
       trunc_dtct = src_len + dst_orig;
       return (trunc_dtct);
    }
    while (src[src_ctr] && src_ctr < (len))
    {
        dst[dst_ctr] = src[src_ctr];
        dst_ctr++;
        src_ctr++;
    }
    dst[dst_ctr] = '\0';
    trunc_dtct = src_len + dst_orig; 
    return (trunc_dtct);
}

