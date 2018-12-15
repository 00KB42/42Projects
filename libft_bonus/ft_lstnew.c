#include "libft.h"

t_list * ft_lstnew(void const *content, size_t content_size)
{
    t_list *new_list;
    new_list = (struct s_list *)malloc(sizeof(t_list));
    if (new_list->content_size)
    {
        if (content == NULL)
        {
            new_list->content = NULL; // do we need to explicate this?
            new_list->content_size = 0;
            new_list->next = NULL;
            return (new_list);//(&new_list);
        }
        else
        {
            new_list->content = (void *)content;
            new_list->content_size = content_size;
            new_list->next = NULL;
            return (new_list);//(&new_list);
        }
    }
    else
        return NULL;
}

