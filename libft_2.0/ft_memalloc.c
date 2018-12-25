#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t i;
	size_t *ptr; // how do we account for other non-int variable types?

	i = 0;
	ptr = (size_t *)malloc(size * (sizeof(int))); //typecasting malloc because it returns void*
	if (ptr)
	{
		while (i < size)
		{
			ptr[i] = 0;
			i++;
		}
		return(ptr);
	}
	else
		return (NULL);
}
