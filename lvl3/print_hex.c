/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:20:00 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/23 17:28:19 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long	ft_atol(char *str)
{
	long	res = 0;
	int		i = 0;

	while (str[i])
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res);
}

void	ft_print_hex(long n)
{
	char hexa[] = "0123456789abcdef";

	if (n >= 16)
		ft_print_hex(n / 16);
	write(1, &hexa[n % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_print_hex(ft_atol(argv[1]));
	write(1, "\n", 1);
	return (0);
}