/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 10:12:38 by kbrown            #+#    #+#             */
/*   Updated: 2019/01/02 10:13:00 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
    t_list		*tmp;
    
    if (lst && f)
    {
        tmp = lst;
        while (tmp != NULL)
        {
            f(tmp);
            tmp = tmp->next;
        }
    }
}
