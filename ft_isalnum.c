#include "libft.h"

int	ft_isalnum(int c)
{
    if (c >= '0' && c <= 'z')
        return (1);
    else
        return (0);
}
