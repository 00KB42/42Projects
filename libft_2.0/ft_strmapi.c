#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;
	int		j;
	
	i = 0;
	j = 0;
	while (s[i])
	{
		ptr = (char*)malloc(sizeof(char) * (i + 1));
		i++;
	}
	while (s[j])
	{
		ptr[j] = (f(j, s[j]));
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
