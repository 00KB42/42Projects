#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	int i;
	int ctr;
	i = 0;
	t_list *ptr;
	ptr = lst;
	while (ptr->next != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	i++;
	ptr = lst;
	ptr = (struct s_list*)malloc(i * sizeof(t_list));
	if (!ptr)
		return NULL;
	ctr = 0;
	while (ctr < i)
	{
		ptr[ctr].next = &ptr[ctr+1];
		ptr[ctr].content = lst[ctr].content;
		ctr++;
	}
	ptr[ctr-1].next = NULL;
	i = 0;
	while (lst->next != NULL )
	{
		ptr[i].content = (f(lst))->content;
		lst = lst->next;
		i++;
	}
	ptr[i].content = (f(lst))->content;
	return (ptr);
}
