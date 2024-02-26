/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:10:34 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/26 21:22:41 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_fprime(int nbr)
{
	int	i = 1;

	if (nbr == 1)
		printf("1");
	while (nbr >= ++i)
	{
		if (nbr % i == 0)
		{
			printf("%d", i);
			if (nbr == i)
				return ;
			printf("*");
			nbr /= i;
			i = 1;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}
