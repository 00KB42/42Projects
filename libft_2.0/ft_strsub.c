#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *ptr;
	size_t i;
	
	i = 0;
	ptr = (char*)malloc(len * sizeof(char));
	if (ptr)
	{
		while (s[start] && i < len)
		{
			ptr[i] = s[start];
			start++;
			i++;
		}
		return(ptr);
	}
	else
		return (NULL);
}
