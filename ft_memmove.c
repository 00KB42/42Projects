void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t  i;
    char    *ptr_src;
    char    *ptr_dst;
    
    i = 0;
    ptr_dst = dst;
    ptr_src = src;
    while (ptr_src[i] && ptr_dst[i] && i < len)
    {
        ptr_dst[i] = ptr_src[i++];
    }
}
