#include "libft.h"

void	ft_putnbr(int n)
{
	int i;
	
	i = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (n < 0)
	{
		write (1, "-", 1);
		n = n * -1;
	}
	while (n > 10)
	{
		ft_putnbr (n / 10); // recursively divides until n is < 10
		n = (n % 10) + '0'; // subsequent recursions, take remainder (last #)
		write (1, &n, 1);
		return;
	}
	n = (n % 10) + '0'; // first recursion, take remainder (last #)
	write (1, &n, 1);
}
