/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 12:39:07 by kbrown            #+#    #+#             */
/*   Updated: 2018/11/05 12:48:11 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t	i;
	char	*ptr_src;
	char	*ptr_dst;

	ptr_dst = dst;
	ptr_src = src;
	i = 0;
	while (ptr_src[i] && ptr_dst[i] && i < n)
	{
		if (ptr_src[i] == c)
		{
			ptr_src[i] = ptr_dst[i];
			return (ptr_dst[i + 1]);
		}
		else
		ptr_src[i] = ptr_dst[i++];
	}
	return (NULL);
}
