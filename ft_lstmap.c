/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 10:12:42 by kbrown            #+#    #+#             */
/*   Updated: 2019/01/02 10:13:03 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lst_ctr(t_list *lst)
{
	int		i;

	i = 0;
	while (lst->next != NULL)
	{
		i++;
		lst = lst->next;
	}
	i++;
	return (i);
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	int		i;
	int		ctr;
	t_list	*ptr;

	ctr = 0;
	i = ft_lst_ctr(lst);
	ptr = (struct s_list*)malloc(i * sizeof(t_list));
	if (!ptr)
		return (NULL);
	while (ctr < i)
	{
		ptr[ctr].next = &ptr[ctr + 1];
		ptr[ctr].content = lst[ctr].content;
		ctr++;
	}
	ptr[ctr - 1].next = NULL;
	i = 0;
	while (lst->next != NULL)
	{
		ptr[i].content = (f(lst))->content;
		lst = lst->next;
		i++;
	}
	ptr[i].content = (f(lst))->content;
	return (ptr);
}
