#include "libft.h"

void ft_strclr(char *s)
{
    int i;
    
    i = 0;
    while (s[i])
    {
        s[i] = '\0';
        i++;
    }
}

//what if they pass a null within the string?
