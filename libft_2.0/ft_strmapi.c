/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 10:35:11 by kbrown            #+#    #+#             */
/*   Updated: 2019/01/02 10:35:12 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		ptr = (char*)malloc(sizeof(char) * (i + 1));
		i++;
	}
	while (s[j])
	{
		ptr[j] = (f(j, s[j]));
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
