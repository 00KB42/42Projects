#include "libft.h"

char * ft_strtrim(char const *s)
{
    char *ptr;
    int i;
    int forward_i;
    int backward_i;
    
    i = 0;
    forward_i = 0;
    backward_i = 0;
    while (s[backward_i])
        backward_i++;
    backward_i--; // otherwise on NULL terminator
    
    
    if (s[forward_i] == ' ' || s[forward_i] == '\n' || s[forward_i] == '\t')
    {
        while (s[forward_i] && (s[forward_i] == ' ' || s[forward_i] == '\n' || s[forward_i] == '\t'))
            forward_i++;
    }
    else
        return ((char*)s);
    
    
    
    if (s[backward_i] == ' ' || s[backward_i] == '\n' || s[backward_i] == '\t')
    {
        while (s[forward_i] && (s[backward_i] == ' ' || s[backward_i] == '\n' || s[backward_i] == '\t'))
            backward_i--;
    }
    else
        return ((char*)s);
    
    
    ptr = (char*)malloc(((backward_i + 2) - forward_i) * sizeof(char));
   
    
    if (ptr)
    {
        while (forward_i < (backward_i + 1))
        {
            ptr[i] = s[forward_i];
            forward_i++;
            i++;
        }
        ptr[i] = '\0';
        return (ptr);
    }
    else
        return (NULL);
}
