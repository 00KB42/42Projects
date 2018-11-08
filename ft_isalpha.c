#include "libft.h"

int	ft_isalpha(int c)
{
    if (c >= 'A' && c <= 'z')
        return (1);
    else
        return (0);
}
