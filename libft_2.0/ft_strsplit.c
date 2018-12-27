#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int i;
	int j;
	int str_chr_ctr;
	int y; // array iterator
	int x; // array iterator
	char **array;
	
	i = 0;
	j = 0;
	str_chr_ctr = 0;
	x = 0;
	y = 0;
	while (s[i]) //srt_ctr function
		if (s[i] == c)
			i++;
		else 
		{
			str_chr_ctr++;
			while (s[i] && s[i] != c)
				i++;
		}
	array = (char**)malloc((str_chr_ctr + 1) * sizeof(char*));
	i = 0;
	str_chr_ctr = 0;
	while (s[j])
		if (s[j] == c)
			j++;
		else 
		{
			while (s[j] && s[j] != c)
			{
				str_chr_ctr++;
				j++;
			}
			array[i]=(char *)malloc((str_chr_ctr + 1) * sizeof(char));
			i++;
			while (str_chr_ctr > 0)
			{
				array[y][x] = s[j - str_chr_ctr];
				x++; //same row and string
				str_chr_ctr--;
			}
			str_chr_ctr = 0;
			array[y][x] = '\0';
			x = 0;
			y++; // moving down one row
		}
	array[y] = NULL;
	return(array);
}

