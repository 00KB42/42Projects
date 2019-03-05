/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 10:19:23 by kbrown            #+#    #+#             */
/*   Updated: 2019/01/02 10:19:24 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	while (s[i])
	{
		ptr = (char*)malloc(sizeof(char) * (i + 1));
		i++;
	}
	while (s[j])
	{
		ptr[j] = (f(s[j]));
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
