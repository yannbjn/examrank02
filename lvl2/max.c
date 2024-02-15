/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:15:47 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/15 19:39:53 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	unsigned int	i;
	int	min;
	int max;
	
	i = 0;
	min = -2147483648;
	max = -2147483648;
	
	if (!tab)
		return (0);
	while (i < len)
	{
		if (tab[i] >= min)
		{
			max = tab[i];
			min = max;
		}
		i++;
	}
	return (max);
}

int	main(void)
{
	int tab[10];

	tab[0] = 2147483647;
	tab[1] = 10;
	tab[2] = 42;
	tab[3] = 24334;
	tab[4] = -13132;
	tab[5] = 21;
	tab[6] = 1231;
	tab[7] = 12;
	tab[8] = -42;
	tab[9] = 1231423;

	printf("%d\n", max(tab, 10));
}