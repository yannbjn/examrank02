/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:57:35 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/27 20:42:02 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i = 0;
	int	res = 0;

	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - 48);
	return (res);
}

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	char c = (nbr % 10) + 48;
	write(1, &c, 1);
}

int	ft_is_prime(int nbr)
{
	int	i = 2;
	
	if (nbr == 1)
		return (0);
	while (i <= (nbr / 2))
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int sum = 0;
	int	i = 0;

	if (argc == 2)
	{
		int	nbr = ft_atoi(argv[1]);
		while (i <= nbr && i <= 46341)
		{
			if (ft_is_prime(i))
				sum += i;
			i++;
		}
		ft_putnbr(sum);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
}
