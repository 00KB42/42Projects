void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    char *ptr_s;
    
    i = 0;
    ptr_s = s;
    while (i < n)
    {
        if (ptr_s[i] == c)
            return (ptr_s[i]);
        else
            i++;
    }
    return (NULL);
}
