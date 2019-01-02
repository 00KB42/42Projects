/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 10:19:40 by kbrown            #+#    #+#             */
/*   Updated: 2019/01/02 10:19:42 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char*)malloc(size * (sizeof(char)));
	if (ptr)
	{
		while (i < size)
		{
			ptr[i] = '\0';
			i++;
		}
		return (ptr);
	}
	else
		return (NULL);
}
