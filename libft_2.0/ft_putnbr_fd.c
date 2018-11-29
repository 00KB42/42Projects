#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    int i;
    
    i = 0;
    while (n > 10)
    {
        ft_putnbr_fd(n / 10); // recursively divides until n is < 10
        n = (n % 10) + '0'; // subsequent recursions, take remainder (last #)
        write (fd, &n, 1);
        return;
    }
    n = (n % 10) + '0'; // first recursion, take remainder (last #)
    write (fd, &n, 1);
}
