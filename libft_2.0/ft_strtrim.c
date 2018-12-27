#include "libft.h"

char * ft_strtrim(char const *s)
{
    char *ptr;
    int i;
    int forward_i;
    int backward_i;
    int len;
    
    i = 0;
    forward_i = 0;
    backward_i = 0;
    len = 0;
    while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
        len ++;
    if (s[len] == '\0')
    {
        ptr = (char *)malloc(1 * sizeof(char));
        ptr[0] = '\0';
        return (ptr);
    }
    backward_i = (ft_strlen(s) - 1);
    while (s[forward_i] && (s[forward_i] == ' ' || s[forward_i] == '\n' || s[forward_i] == '\t'))
        forward_i++;
    while (s[backward_i] && (s[backward_i] == ' ' || s[backward_i] == '\n' || s[backward_i] == '\t'))
        backward_i--;
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
        return (0);
}