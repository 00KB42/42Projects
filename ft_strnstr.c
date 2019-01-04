/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:31:32 by kbrown            #+#    #+#             */
/*   Updated: 2018/11/12 13:31:34 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hsk, const char *ndl, size_t len)
{
	size_t		ndl_i;
	size_t		hsk_i;
	size_t		match;
	const char	*ptr;

	ndl_i = 0;
	hsk_i = 0;
	match = ft_strlen(ndl);
	if (ndl[ndl_i] == '\0')
		return ((char *)hsk);
	while (hsk[hsk_i] && hsk_i < len)
	{
		if (match == ndl_i)
		{
				ptr = &hsk[hsk_i - match];
				return ((char*)ptr);
		}
		if (ndl[ndl_i] == hsk[hsk_i] && ndl[ndl_i] && hsk[hsk_i])
			ndl_i++;
		else
			ndl_i = 0;
		hsk_i++;
	}
	return (NULL);
}
