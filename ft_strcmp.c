/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 10:59:26 by kbrown            #+#    #+#             */
/*   Updated: 2018/10/01 15:45:58 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int			ft_strcmp(const char *s1, const char *s2)
{
    char	ptr1;
    char	ptr2;
    int		i;
    
    i = 0;
    while (*(s1 + i) && *(s1 + i) == *(s2 + i))
        i++;
    ptr1 = s1[i];
    ptr2 = s2[i];
    return ((unsigned char)ptr1 - (unsigned char)ptr2);
}*/
