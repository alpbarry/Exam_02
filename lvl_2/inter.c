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

void	inter(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (!is_repeat(s1, s1[i], i) && s1[i] == s2[j])
			{
				ft_putchar(s1[i]);
				break;
			}
			j++;
		}
	i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	ft_putchar('\n');
	return (0);
}
