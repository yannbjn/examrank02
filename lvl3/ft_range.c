/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:30:25 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/23 15:40:15 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*range;
	unsigned int	i = 0;

	if (start > end)
		range = malloc(sizeof(int) * (start - end + 1));
	else
		range = malloc(sizeof(int) * (end - start + 1));
	if (!range)
		return (0);
	while (start != end)
	{
		if (start > end)
		{
			range[i] = start;
			i++;
			start--;
		}
		if (start < end)
		{
			range[i] = start;
			i++;
			start++;
		}
	}
	range[i] = start;
	return (range);
}

#include <stdio.h>

int	main(void)
{
	int	*range;

	range = ft_range(0, -3);
	printf("%d %d %d %d", range[0], range[1], range[2], range[3]);
	return (0);
}