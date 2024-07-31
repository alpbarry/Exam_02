#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	small_atoi(char *s)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s[i])
	{
		res = (res * 10) + s[i] - '0';
		i++;
	}
	return (res);
}

void	print_hex(unsigned int n)
{
	char	hex[] = "0123456789abcdef";
	if (n >= 16)
		print_hex(n / 16);
	write (1, &hex[n % 16], 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		print_hex(small_atoi(av[1]));
	else
		ft_putchar('\n');
	return (0);
}
