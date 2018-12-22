#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;
	
	i = 0;
	
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	
	if (s1[i] && s2[i] && i == n) // if n shorter than the actual length but one character more is a mismatch.
	{
		i--;
	}
	if (n == 0)
		return (1);
	else if (s1[i] == '\0' && s2[i] == '\0')
		return (1);
	else if (s1[i] == s2[i])
		return (1); // if n ints shorter than the actual length (not hitting '\0');
	else
		return (0);
}

