#include "libft.h"

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
    const char *ptr;
    ptr = s;
 
    int d = ((int)len + (int)start);
    ptr = (char *)malloc(10 * sizeof(char));
    return ((char*)&ptr[d]);
}
