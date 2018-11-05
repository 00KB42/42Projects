/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 12:11:34 by kbrown            #+#    #+#             */
/*   Updated: 2018/10/01 15:50:51 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
int		ft_isdigit(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
#endif
