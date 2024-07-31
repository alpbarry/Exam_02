/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:36:08 by alphbarr          #+#    #+#             */
/*   Updated: 2024/07/23 13:56:21 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat_alpha(char *s)
{
	int	i;
	int	n;

	i = 0;
	while (s[i])
	{

		if (s[i] >= 'a' && s[i] <= 'z')
		{
			n = s[i] - 'a' + 1;
			while (n--)
				ft_putchar(s[i]);
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			n = s[i] - 'A' + 1;
			while (n--)
				ft_putchar(s[i]);
		}
		else
			ft_putchar(s[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		repeat_alpha(av[1]);
	ft_putchar('\n');
	return (0);
}
