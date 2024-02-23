/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:00:46 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/23 17:18:27 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_pgcd(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;	
	}
	printf("%d", a);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_pgcd(atoi(argv[1]), atoi(argv[2]));
	printf("\n");
	return (0);
}
