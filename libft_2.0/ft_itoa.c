#include "libft.h"

char	*ft_itoa(int n)
{
	char *ptr;
	int ctr;
	int cpy;
	int neg;
	
	ctr = 0;
	cpy = 0;
	neg = 0;
	if (n == -2147483648)
	{
		ptr = "-2147483648";
		return (ptr);
	}
	if (n == 0)
	{
		ptr = "0";
		return (ptr);
	}
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
