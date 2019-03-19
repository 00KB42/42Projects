#include "libft.h"

char	*ft_size_eval(int n, char *ptr)
{
    if (n == 0)
    {
        ptr = ft_strnew(1);
        ft_strcpy(ptr, "0");
        return (ptr);
    }
    if (n == -2147483648)
    {
        ptr = ft_strnew(11);
        ft_strcpy(ptr, "-2147483648");
        return (ptr);
    }
    return (ptr);
}
