#include "libft.h"

char	*ft_itoa(int n)
{
	char *ptr;
	int i;
	int ctr;
	int cpy;
	int neg;
	
	i = 0;
	ctr = 0;
	cpy = 0;
	neg = 0;
	if (n == -2147483648)
	{
		char *str;
		str = "-2147483648";
		return (str);
	}
	if (n == 0)
		ctr++; // space for zero
	if (n < 0)
	{
		neg = 1;
		n = (n * -1);
		ctr++; // space for negative
	}
	cpy = n;
	while (cpy > 0)
	{
		cpy =  cpy / 10;
		ctr++;
	}
	ptr = (char*)malloc((ctr + 1) * sizeof(char));
	ptr[ctr] = '\0';
	ctr--;
	if (n == 0)
		ptr[ctr] = (n % 10) + '0';
	while (n > 0)
	{
		ptr[ctr] = (n % 10) + '0';
		n =  n / 10;
		ctr--;
	}
	if (neg == 1)
		ptr[ctr] = '-';
	return (ptr);
}
