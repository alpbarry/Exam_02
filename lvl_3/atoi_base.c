int	ft_atoi_base(const char *s, int base)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (s[i])
	{
		res *= base;
		if (s[i] >= '0' && s[i] <= '9')
			res += s[i] - '0';
		else if (s[i] >= 'a' && s[i] <= 'z')
			res += s[i] - 'a' + 10;
		else if (s[i] >= 'A' && s[i] <= 'Z')
			res += s[i] - 'A' + 10;
		i++;
	}
	return (res * sign);
}

#include <stdio.h>

int	main()
{
	int	b = 16;
	char *s = "123";
	printf("%d", ft_atoi_base(s, b));
	return (0);
}
