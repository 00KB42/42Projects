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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		ndl_ctr;
	size_t		hsk_ctr;
	const char	*ptr_match;

	ndl_ctr = 0;
	hsk_ctr = 0;
	if (needle[ndl_ctr] == '\0')
		return ((char *)haystack); // is this appropriate (typecasting to char *)?
	while(haystack[hsk_ctr] && hsk_ctr < len)
	{
		if (needle[ndl_ctr] == haystack[hsk_ctr]) // needle[0] match detected
		{
			ptr_match = &haystack[hsk_ctr];
			while(needle[ndl_ctr] == haystack[hsk_ctr] && needle[ndl_ctr] && haystack[hsk_ctr])
			{
				ndl_ctr++;
				hsk_ctr++;
			}
			if (needle[ndl_ctr] == '\0' && hsk_ctr < len) // full pattern detected and within appropriate len
				return ((char *)ptr_match); // is this appropriate (typecasting to char *)
			ndl_ctr = 0; // reset needle finder
		}
		else
			hsk_ctr++;
	}
	return (NULL);
}