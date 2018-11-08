#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while (s[i])
        i++;
    while (s[i] != c && i > 0)
        i--;
    if (s[i] == c || (c == '\0' && s[i] == c))
    {
        s = &s[i];
        return ((char *)s);
    }
    else
        return (NULL);
}
