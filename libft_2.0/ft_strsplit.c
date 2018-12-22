#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int i;
	int str_ct;
	int word_len;
	int ctr_1; // first of word segment
	int ctr_2; // end of word segment
	int y; // array iterator
	int x; // array iterator
	char **array;
	
	i = 0;
	str_ct = 0;
	word_len = 0;
	ctr_1 = 0;
	ctr_2 = 0;
	x = 0;
	y = 0;
	while (s[i]) // number of strings and longest str_len
	{
		if (s[i] == c)
			i++;
		else //new string creation
		{
			ctr_1 = i;
			ctr_2 = i;
			while (s[i] != c && s[i])
			{
				ctr_2++;
				i++; //to keep track of location in original string
			}
			if (word_len < (ctr_2 - ctr_1))
				word_len = (ctr_2 - ctr_1);
			str_ct++;
			i++;
		}
	}
	array = (char**)malloc((str_ct + 1) * sizeof(char*));
	for(i=0;i<str_ct;i++)
		array[i]=(char *)malloc((word_len + 1) * sizeof(char));
	array[i]=(char*)malloc((1) * sizeof(char));
	i = 0;
	while (s[i]) // number of strings and longest str_len
	{
		if (s[i] == c && s[i])
			i++;
		else //new string creation
		{
			x = 0; // reset str to index 0
			while (s[i] != c && s[i])
			{
				array[y][x] = s[i];
				i++;
				x++; //same row and string
			}
			array[y][x] = '\0';
			y++; // moving down one row
		}
	}
	array[y] = NULL;
	return(array);
}


