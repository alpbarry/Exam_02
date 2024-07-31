#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	is_repeat(char *s, char c, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (!is_repeat(s1, s1[i], i))
			ft_putchar(s1[i]);
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (!is_repeat(s2, s2[i], i) && !is_repeat(s1, s2[i], i))
			ft_putchar(s2[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	ft_putchar('\n');
	return (0);
}
