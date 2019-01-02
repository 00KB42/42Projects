#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int		len_s1;
	int		len_s2;

	i = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ptr = (char*)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		ptr[len_s1] = s2[i];
		i++;
		len_s1++;
	}
	ptr[len_s1] = '\0';
	return (ptr);
}
