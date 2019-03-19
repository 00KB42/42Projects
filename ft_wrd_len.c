#include "libft.h"

int	ft_wrd_len(char const *s, int i, char c)
{
    int		len;
    
    len = 0;
    while (s[i] && s[i] != c)
    {
        i++;
        len++;
    }
    return (len);
}
