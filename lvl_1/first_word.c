/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:11:37 by alphbarr          #+#    #+#             */
/*   Updated: 2024/07/23 13:16:58 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first_word(char	*s)
{
	int	i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t')
		i++;
	while (!(s[i] == ' ' || s[i] == '\t') && s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int ac, char **av)
{
	if (ac == 2)
		first_word(av[1]);
	else
		ft_putchar('\n');
	return (0);
}
