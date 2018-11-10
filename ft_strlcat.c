#include "libft.h"

size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t size)
{
    size_t src_ctr;
    size_t dst_ctr;
    
    src_ctr = 0;
    dst_ctr = 0;
    while (dst[dst_ctr])
    {
        dst_ctr++;
    }
    while (src[src_ctr] && src_ctr < size)
    {
        dst[dst_ctr] = src[src_ctr];
        dst_ctr++;
        src_ctr++;
    }
    dst[dst_ctr] = '\0';
    return (src[src_ctr]);
}
