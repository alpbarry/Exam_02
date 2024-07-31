#include <unistd.h>

void	epur(char *s)
{
	int	i;
	int	flg;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t')
		i++;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\t')
			flg = 1;
		if (s[i] != ' ' || s[i] != '\t')
		{
			if (flg)
				write (1, " ", 1);
			flg = 0;
			write (1, &s[i], 1);
		}
		i++;
	}
	write (1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		epur(av[1]);
	else
		write (1, "\n", 1);
	return (0);
}
