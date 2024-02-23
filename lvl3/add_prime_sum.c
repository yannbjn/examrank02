/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:57:35 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/23 13:50:29 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	i = 0;
	int	res = 0;

	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - 48);
	return (res);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + 48);
}

int	ft_is_prime(int	nb)
{
	int	n = 2;
	
	if (nb <= 1)
		return (0);
	while (n <= (nb / 2))
	{
		if ((nb % n) == 0)
			return (0);
		n++;
	}
	return (1);
}

void	ft_prime_sum(char *str)
{
	int	nbr = 0;
	int	sum = 0;
	int	prim = 1;

	nbr = ft_atoi(str);
	while (prim <= nbr && prim <= 46342)
	{
		if (ft_is_prime(prim))
			sum += prim;
		prim++;
	}
	ft_putnbr(sum);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_prime_sum(argv[1]);
	write(1, "\n", 1);
	return (0);
}