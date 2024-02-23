/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:41:27 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/23 15:47:31 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	unsigned int	i = 0;
	int	*rrange;

	if (start < end)
		rrange = malloc(sizeof(int) * (end - start + 1));
	else
		rrange = malloc(sizeof(int) * (start - end + 1));
	while (start != end)
	{
		if (end > start)
		{
			rrange[i] = end;
			end--;
			i++;
		}
		if (end < start)
		{
			rrange[i] = end;
			end++;
			i++;
		}
	}
	rrange[i] = end;
	return (rrange);
}

#include <stdio.h>

int	main(void)
{
	int	*rrange;

	rrange = ft_rrange(0, -3);
	printf("%d %d %d %d", rrange[0], rrange[1], rrange[2], rrange[3]);
	return (0);
}
