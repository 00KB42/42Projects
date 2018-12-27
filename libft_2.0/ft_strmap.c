#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int i;
	int j;
	char *ptr;
	
	i = 0;
	j = 0;
	while (s[i])
	{
		ptr = (char*)malloc(sizeof(char) * (i + 1));
		i++;
	}
	while (s[j])
	{
		ptr[j] = (f(s[j]));
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
