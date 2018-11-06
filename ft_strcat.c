char    *ft_strcat(char *restrict s1, const char *restrict s2)
{
    size_t src_ctr;
    size_t dst_ctr;
    
    src_ctr = 0;
    dst_ctr = 0;
    while (s1[src_ctr])
    {
        src_ctr++;
    }
    while (s2[dst_ctr])
    {
        s1[src_ctr] = s2[dst_ctr];
        dst_ctr++;
        src_ctr++;
    }
    s1[src_ctr] = '\0';
    return (s1[src_ctr]);
}
