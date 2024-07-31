/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:43:47 by alphbarr          #+#    #+#             */
/*   Updated: 2024/07/23 15:50:56 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	do_op(char *f, char *s, char *t)
{

	if (s[0] == '+')
		printf("%d", atoi(f) + atoi(t));
	else if (s[0] == '-')
		printf("%d", atoi(f) - atoi(t));
	else if (s[0] == '*')
		printf("%d", atoi(f) * atoi(t));
	else if (s[0] == '/')
		printf("%d", atoi(f) / atoi(t));
	else if (s[0] == '%')
		printf("%d", atoi(f) % atoi(t));
}

int	main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2], av[3]);
	printf("\n");
	return (0);
}
