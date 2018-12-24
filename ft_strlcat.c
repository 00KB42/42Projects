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

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t		dst_len;
	size_t		src_to_cpy;
	size_t		nbr_cpyd;
	size_t		src_len;
	size_t		dst_orig;
	size_t		i;

	src_len = 0;
	i = 0;
	dst_len = 0;
	src_to_cpy = 0;
	nbr_cpyd = 0;
	dst_orig = 0;
	
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	dst_orig = dst_len;
	if (size < dst_len)
		dst_orig = size;
	src_to_cpy = (size - dst_len - 1);
	if ((int)src_to_cpy < 0)
	{
		nbr_cpyd = src_len + dst_orig; // if size is less than len of dst, add len of src and dst_totrav
		return (nbr_cpyd);
	}
	if (src[i] && i < src_to_cpy)
	{
		while (src[i] && i < src_to_cpy)
		{
			dst[dst_len] = src[i];
			dst_len++;
			i++;
		}
		dst[dst_len] = '\0';
	}
	nbr_cpyd = src_len + dst_orig; // if size not goofy, you're getting length of src you coied plus length of dst copied..
	return (nbr_cpyd);
}

