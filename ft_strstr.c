/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:34:17 by kbrown            #+#    #+#             */
/*   Updated: 2018/11/12 13:34:21 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		ndl_ctr;
	int		hsk_ctr;
	int		pat_match;
	char	*ptr_match;

	ndl_ctr = 0;
	hsk_ctr = 0;
	pat_match = 0;
	if (needle[ndl_ctr] == '\0')
		return (haystack);
	while(haystack[hsk_ctr])
	{
		if (needle[ndl_ctr] == haystack[hsk_ctr])
		{
			pat_match = hsk_ctr;
			while(needle[ndl_ctr] == haystack[hsk_ctr] && needle[ndl_ctr] && haystack[hsk_ctr])
			{
				ndl_ctr++;
				hsk_ctr++;
			}
			if (needle[ndl_ctr] == '\0') // full pattern detected
			{
				ptr_match = &haystack[pat_match];
				return (ptr_match);
			}
			else
				ndl_ctr = 0;
		}
		else
			hsk_ctr++;
	}
	return (NULL);
}
