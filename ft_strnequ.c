/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 10:19:32 by kbrown            #+#    #+#             */
/*   Updated: 2019/01/02 10:19:33 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
		i++;
	if (s1[i] && s2[i] && i == n)
		i--;
	if (n == 0)
		return (1);
	else if (s1[i] == '\0' && s2[i] == '\0')
		return (1);
	else if (s1[i] == s2[i])
		return (1);
	else
		return (0);
}
