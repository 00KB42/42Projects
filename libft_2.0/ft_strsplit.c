#include "libft.h"

char ** ft_strsplit(char const *s, char c)
{
    int i;
    int str_ct;
    int word_len;
    int word_cnt;
    int ctr_1; // first of word segment
    int ctr_2; // end of word segment
    char **array;
    
    i = 0;
    str_ct = 0;
    word_len = 0;
    word_cnt = 0;
    ctr_1 = 0;
    ctr_2 = 0;
    
    while (s[i]) // number of strings and longest str_len
    {
        i = 0;
        if (s[i] == c)
        {
            i++;
        }
        else //new string creation
        {
            ctr_1 = s[i];
            while (!(s[i] == c))
            {
                ctr_2++;
                i++;
            }
            if (word_len < (ctr_2 - ctr_1))
                word_len = (ctr_2 - ctr_1);
            str_ct++;
        }
    }
    i = 0;
    array = (char**)malloc(str_ct * sizeof(char**));
    for(i=0;i<10;i++)
        array[i]=(char *)malloc(word_len * sizeof(char));
    i = 0;
    while (s[i]) // number of strings and longest str_len
    {
        i = 0;
        if (s[i] == c)
        {
            i++;
        }
        else //new string creation
        {
            ctr_1 = s[i];
            x = 0; // reset str to index 0
            while (!(s[i] == c))
            {
                array[y][x] = s[i];
                ctr_2++;
                i++;
                x++; //same row and string
            }
            y++; // moving down one row
        }
    }
}
