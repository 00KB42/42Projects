#include "libft.h"

t_list * ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
    while (lst->next != NULL)
    {
        f(lst); // how to refer to each t_list elem? (do something)
        lst = (struct s_list*)malloc(sizeof(t_list));
        lst = lst->next; //(move ot next link)
    }
    f(lst); // how to refer to each t_list elem? (do something)
    lst = (struct s_list*)malloc(sizeof(t_list));
    lst = lst->next; //(move ot next link)
    return (lst);
}


