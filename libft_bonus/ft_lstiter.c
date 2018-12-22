#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	while (lst->next != NULL)
	{
		f(lst); // how to refer to each t_list elem? (do something)
		lst = lst->next; //(move ot next link)
	}
	f(lst); //repeat because now we are at last element
	lst = lst->next;
}

