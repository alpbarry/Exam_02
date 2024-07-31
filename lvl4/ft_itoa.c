#include <stdlib.h>

int	len_nbr(int n)
{
	int	len;

	len = 0;
	if (n < 10)
		return (1);
	if (n == 0)
		len++;
	while (n)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int	len;
	char	*res;

	len = len_nbr(n);
	res = (char *)malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n)
	{
		res[--len] = n % 10 +'0';
		n /= 10;
	}
	return (res);
}
