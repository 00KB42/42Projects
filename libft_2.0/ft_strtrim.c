/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 10:20:06 by kbrown            #+#    #+#             */
/*   Updated: 2019/01/02 10:20:08 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ptr;
	int		i;
	int		for_i;
	int		back_i;
	int		len;

	i = 0;
	for_i = 0;
	back_i = 0;
	len = 0;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len++;
	if (s[len] == '\0')
	{
		ptr = (char *)malloc(1 * sizeof(char));
		ptr[0] = '\0';
		return (ptr);
	}
	back_i = (ft_strlen(s) - 1);
	while (s[for_i] && (s[for_i] == ' ' || s[for_i] == '\n' || s[for_i] == '\t'))
		for_i++;
	while (s[back_i] && (s[back_i] == ' ' || s[back_i] == '\n' || s[back_i] == '\t'))
		back_i--;
	ptr = (char*)malloc(((back_i + 2) - for_i) * sizeof(char));
	if (ptr)
	{
		while (for_i < (back_i + 1))
		{
			ptr[i] = s[for_i];
			for_i++;
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	else
		return (0);
}
