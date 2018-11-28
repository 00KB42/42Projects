#include "libft.h"

void ft_memdel(void **ap)
{
    char **ptr;
    int i;
    
    ptr = ap;
    i = 0;
    while (ptr)
    {
        free(ptr);
        ptr = '\0'; // prevents unintended memory changes if we accidentally use ptr again
    }
}
