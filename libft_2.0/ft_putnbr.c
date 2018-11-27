#include "libft.h"

void ft_putnbr(int n)
{
    int i;
    
    i = 0;
    while (n > 10)
    {
        ft_putnbr (n % 10);
        write(1, &n, 1);
        return;
    }
    write (1, &n, 1);
}
