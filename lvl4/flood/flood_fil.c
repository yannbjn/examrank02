/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fil.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:15:16 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/23 20:34:29 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_recurs(char **tab, t_point size, t_point cur, char to_fill)
{
	if (cur.y < 0 || cur.x < 0 || cur.y >= size.y || cur.x >= size.x || tab[cur.y][cur.x] != to_fill)
		return ;
	tab[cur.y][cur.x] = 'F';
	ft_recurs(tab, size, (t_point){cur.x - 1, cur.y}, to_fill);
	ft_recurs(tab, size, (t_point){cur.x, cur.y - 1}, to_fill);
	ft_recurs(tab, size, (t_point){cur.x + 1, cur.y}, to_fill);
	ft_recurs(tab, size, (t_point){cur.x, cur.y + 1}, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	ft_recurs(tab, size, begin, tab[begin.y][begin.x]);
}

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {6, 1};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}