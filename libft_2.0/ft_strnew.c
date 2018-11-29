#include "libft.h"

char * ft_strnew(size_t size)
{
    size_t i;
    char *ptr;
    ptr = (char*)malloc(size * (sizeof(char)));
    if (ptr)
    {
        for (i = 0; i < size; i++)
            ptr[i] = '\0';
        ptr[i] = '\0';
        return (ptr);
    }
    else
        return (NULL);
}
