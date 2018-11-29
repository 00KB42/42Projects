#include "libft.h"

char * ft_strnew(size_t size)
{
    int i;
    char *ptr; //
    ptr = (char*)malloc(size * (sizeof(char)));
    if ((ptr == (char*)malloc(size * (sizeof(char)))))
    {
        for (i = 0; i < size; i++)
            ptr[i] = '\0';
        ptr[i] = '\0';
        return (ptr);
    }
    else
        return (NULL);
}
