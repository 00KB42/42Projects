#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int i;
	char *ptr;
	int len_s1;
	int len_s2;
	for (len_s1 = 0; s1[len_s1]; len_s1++);
	for (len_s2 = 0; s2[len_s2]; len_s2++);
	ptr = (char*)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	for (i = 0; i < len_s1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < len_s2; i++, len_s1++)
		ptr[len_s1] = s2[i];
	ptr[len_s1] = '\0';
	return (ptr);
}
