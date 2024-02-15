/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:47:21 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/15 19:58:16 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check(char *str, char c, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	i = 0;
	int	j = 0;

	while (s1[i])
	{
		if (ft_check(s1, s1[i], i))
			write(1, &s1[i], 1);
		i++;
	}
	while (s2[j])
	{
		if (ft_check(s1, s2[j], i) && ft_check(s2, s2[j], j))
			write(1, &s2[j], 1);
		j++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}