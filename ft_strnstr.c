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
	int		ndl_ctr;
	int		hsk_ctr;
	int		pat_match;
	char	*ptr_match;

	ndl_ctr = 0;
	hsk_ctr = 0;
	pat_match = 0;
	if (needle[ndl_ctr] == '\0')
		return ((char *)haystack); // is this appropriate (typecasting to char *)?
	while(haystack[hsk_ctr] && hsk_ctr < len)
	{
		if (needle[ndl_ctr] == haystack[hsk_ctr])
		{
			pat_match = hsk_ctr;
			while(needle[ndl_ctr] == haystack[hsk_ctr] && needle[ndl_ctr] && haystack[hsk_ctr] && hsk_ctr < len)
			{
				ndl_ctr++;
				hsk_ctr++;
			}
			if (needle[ndl_ctr] == '\0') // full pattern detected
			{
				ptr_match = &haystack[pat_match];
				return ((char *)ptr_match); // is this appropriate (typecasting to char *)?
			}
			else
				ndl_ctr = 0;
		}
		else
			hsk_ctr++;
	}
	return (NULL);
}
