/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:26:17 by alphbarr          #+#    #+#             */
/*   Updated: 2024/07/23 15:32:42 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	alpha_mirror(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'm')
			s[i] = 'z' - (s[i] - 'a');
		else if (s[i] >= 'n' && s[i] <= 'z')
			s[i] = 'a' + ('z' - s[i]);
		else if (s[i] >= 'A' && s[i] <= 'M')
			s[i] = 'Z' - (s[i] - 'A');
		else if (s[i] >= 'N' && s[i] <= 'Z')
			s[i] = 'A' + ('Z' - s[i]);
		ft_putchar(s[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		alpha_mirror(av[1]);
	ft_putchar('\n');
	return (0);
}
