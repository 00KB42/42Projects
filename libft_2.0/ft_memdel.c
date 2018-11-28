#include "libft.h"

void ft_memdel(void **ap)
{
    char **ptr;
    int i;
    
    ptr = ap;
    i = 0;
    while (*ptr[i])
    {
        free(*ptr[i]);
        i++;
    }
}
