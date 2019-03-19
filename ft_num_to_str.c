#include "libft.h"

char	*ft_num_to_str(int n, int ctr, char *ptr, int neg)
{
    ptr[ctr] = '\0';
    while (n > 0)
    {
        ptr[ctr - 1] = (n % 10) + '0';
        n = n / 10;
        ctr--;
    }
    if (neg == 1)
    ptr[ctr - 1] = '-';
    return (ptr);
}
