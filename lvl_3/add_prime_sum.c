#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	n = (n % 10) + '0';
	ft_putchar(n);
}

int	is_prime(int n)
{
	int	i;

	i = 2;
	if (n <= 1)
		return (0);
	while (i <= n / i)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *s)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (s[i])
	{
		res =(res * 10) + (s[i] - '0');
		i++;
	}
	return (res);
}

void	add_prime(int n)
{
	int	s;

	s = 0;
	while (n)
	{
		if (is_prime(n))
			s += n;
		n--;
	}
	ft_putnbr(s);
	ft_putchar('\n');
}

int	main(int ac, char **av)
{
	int	n = ft_atoi(av[1]);
	if (ac == 2)
		add_prime(n);
	else
		ft_putchar('\n');
	return (0);
}
