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

int		ft_wrd_ctr(char const *s, char c)
{
	int		i;
	int		wrd_cnt;

	i = 0;
	wrd_cnt = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			wrd_cnt++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (wrd_cnt);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	int		len;
	char	**array;

	start = 0;
	len = 0;
	i = 0;
	j = 0;
	array = (char**)malloc(((ft_wrd_ctr(s, c)) + 1) * sizeof(char*));
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			start = i;
			while (s[i] && s[i] != c)
			{
				i++;
				len++;
			}
			array[j] = ft_strsub(s, start, len);
			len = 0;
			j++;
		}
	}
	array[j] = NULL;
	return (array);
}
