#include "libft.h"
void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    t_list *ptr;
    ptr = *alst;
    
    while (ptr->next != NULL) //basically until last link where it points to NULL;
    {
        del((*alst)->content,(*alst)->content_size);
        free (*alst);
        ptr = ptr->next; // (move ot next link)
    }
 *alst = NULL;
}

/*void ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
    t_list *ptr;
    ptr = *alst;
    del((*alst)->content,(*alst)->content_size);
    free (*alst);
    *alst = NULL;
}*/
