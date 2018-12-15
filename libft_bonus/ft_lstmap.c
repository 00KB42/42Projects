#include "libft.h"

t_list * ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
    int i;
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
    int fk;
    fk = 0;
    while (fk < i)
    {
        ptr[fk].next = &ptr[fk+1];
        ptr[fk].content = lst[fk].content;
        fk++;
    }
    ptr[fk-1].next = NULL;
    i = 0;
    if (ptr == 0)
        return NULL;
    while (lst->next != NULL )
    {
        f(lst); // how to refer to each t_list elem? (do something)
        ptr[i].content = lst->content;
        //ptr->next = lst->next;
        lst = lst->next; //(move ot next link)
        i++; // ptr ctr plus
    }
    f(lst); // how to refer to each t_list elem? (do something)
    ptr[i].content = lst->content;
    return (ptr);
}
//https://goo.gl/MKBCmA
