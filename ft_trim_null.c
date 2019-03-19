#include "libft.h"

char	*ft_trim_null(char *ptr)
{
    ptr = (char *)malloc(1 * sizeof(char));
    ptr[0] = '\0';
    return (ptr);
}
