#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int i;
	int j;
	int str_ct;
	int word_len;
	int y; // array iterator
	int x; // array iterator
	char **array;
	
	i = 0;
	j = 0;
	str_ct = 0;
	word_len = 0;
	x = 0;
	y = 0;
	while (s[i]) //srt_ctr function
		if (s[i] == c)
			i++;
		else 
		{
			str_ct++;
			while (s[i] && s[i] != c)
				i++;
		}
	array = (char**)malloc((str_ct + 1) * sizeof(char*));
	i = 0;
	while (s[j])
		if (s[j] == c)
			j++;
		else 
		{
			while (s[j] && s[j] != c)
			{
				word_len++;
				j++;
			}
			array[i]=(char *)malloc((word_len + 1) * sizeof(char));
			i++;
			while (word_len > 0)
			{
				array[y][x] = s[j - word_len];
				x++; //same row and string
				word_len--;
			}
			word_len = 0;
			array[y][x] = '\0';
			x = 0;
			y++; // moving down one row
		}
	array[y] = NULL;
	return(array);
}

