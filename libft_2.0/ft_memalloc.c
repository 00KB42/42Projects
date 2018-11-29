#include "libft.h"

void    *ft_memalloc(size_t size)
{
    int i;
    size_t *ptr; // how do we account for other non-int variable types?
    ptr = (size_t)malloc(size * (sizeof(int)));
    if ((ptr == (size_t)malloc(size * (sizeof(int)))))
    {
        for (i = 0; i < size; i++)
            ptr[i] = 0;
        return(ptr);
    }
    else
        return (NULL);
}
