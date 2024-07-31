#include <stdio.h>
#include <stdlib.h>

int	if_prime(int n)
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
	return (0);
}

void	fprime(unsigned int n)
{
	int	i;

	i = 2;
	if (n == 1)
	{
		printf("1");
		return ;
	}
	while (n >= i)
	{
		if (n % i == 0)
		{
			printf("%d", i);
			if (n != i)
				printf ("*");
			n /= i;
			i--;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
	return (0);
}
