#include "libft.h"

int	ft_div_to_zero(int n)
{
    int		ctr;
    
    ctr = 0;
    while (n > 0)
    {
        n = n / 10;
        ctr++;
    }
    return (ctr);
}
