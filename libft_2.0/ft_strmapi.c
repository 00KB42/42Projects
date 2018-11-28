#include "libft.h"

char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *ptr;
    for (i = 0; s[i]; i++);
    ptr = (char*)malloc(sizeof(char) * (i + 1));
    for (i = 0; s[i]; i++)
        ptr[i] = (f(s[i]));
    ptr[i] = '\0';
    return (ptr);
}
