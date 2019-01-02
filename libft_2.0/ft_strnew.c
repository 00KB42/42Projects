#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t i;
	char *ptr;
	
	i = 0;
	ptr = (char*)malloc(size * (sizeof(char)));
	if (ptr)
	{
		while (i < size)
		{
			ptr[i] = '\0';
			i++;
		}
		return (ptr);
	}
	else
		return (NULL);
}
