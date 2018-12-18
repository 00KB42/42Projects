#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    t_list *ptr;
    ptr = *alst;
    
    while (ptr->next != NULL)
    {
        del((*ptr).content,(*ptr).content_size);
        ptr = ptr->next;
    }
    del((*ptr).content,(*ptr).content_size);
    free (*alst);
    *alst = NULL;
}

