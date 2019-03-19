/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 10:19:49 by kbrown            #+#    #+#             */
/*   Updated: 2019/01/02 10:19:50 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**array;

	i = 0;
	j = 0;
	if (!s || !c)
		return (NULL);
	array = (char**)malloc(((ft_wrd_ctr(s, c)) + 1) * sizeof(char*));
	if (!array)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			array[j] = ft_strsub(s, i, (ft_wrd_len(s, i, c)));
			i = ft_wrd_len(s, i, c) + i;
			j++;
		}
	}
	array[j] = NULL;
	return (array);
}
