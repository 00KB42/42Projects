#include "libft.h"

int ft_wrd_ctr (char const *s, char c)
{
    int i;
    int wrd_cnt;

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

char *ft_fill_arr (const char *s, char c)
{
    int i;
    int chr_ctr;
    int x;
    int y;
    char *ptr;

    i = 0;
    chr_ctr = 0;
    x = 0;
    y = 0;
    while (s[i] && s[i] != c)
    {
        chr_ctr++;
        i++;        
    }
    ptr = (char *)malloc((chr_ctr + 1) * sizeof(char));
    while (chr_ctr > 0)
    {
        ptr[x] = s[i - chr_ctr];
        x++; //same row and string
        chr_ctr--;
    }
    ptr[x] = '\0';
    return (ptr);
}

char    **ft_strsplit(char const *s, char c)
{
    int i;
    int j;
    int wrd_cnt;
    char **array;

    i = 0;
    j = 0;
    wrd_cnt = 0;
    wrd_cnt = ft_wrd_ctr(s, c);
    array = (char**)malloc((wrd_cnt + 1) * sizeof(char*));
    while (s[i])
    {
        if (s[i] == c)
            i++;
        else if (s[i] != c)
        { 
            s = &s[i];
            array[j] = ft_fill_arr(s, c);
            i = 0;
            j++;
            while (s[i] && s[i] != c)
                i++;
        }
        else
          i++;
    }
    array[j] = NULL;
    return(array);
}

