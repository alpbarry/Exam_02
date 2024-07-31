/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alphbarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:17:23 by alphbarr          #+#    #+#             */
/*   Updated: 2024/07/23 13:29:11 by alphbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	n = n % 10 + '0';
	write(1, &n, 1);
}

void	fizzbuzz(int n)
{
	if (n % 15 == 0)
		write (1, "fizzbuzz\n", 9);
	else if (n % 3 == 0)
		write (1, "fizz\n", 5);
	else if (n % 5 == 0)
		write (1, "buzz\n", 5);
	else
	{
		ft_putnbr(n);
		write (1, "\n", 1);
	}
}

int	main()
{
	int	n = 1;

	while (n <= 100)
	{
		fizzbuzz(n);
		n++;
	}
	return (0);
}
