#include "libft.h"

int	ft_wrd_ctr(char const *s, char c)
{
    int		i;
    int		wrd_cnt;
    
    i = 0;
    wrd_cnt = 0;
    while (s[i])
    {
        if (s[i] == c)
        i++;
        else
        {
            wrd_cnt++;
            while (s[i] && s[i] != c)
            i++;
        }
    }
    return (wrd_cnt);
}
