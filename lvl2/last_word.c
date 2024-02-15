/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:52:21 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/15 19:12:25 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_last_word(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if ((str[i] == ' ' || str[i] == '\t') && str[i + 1] > ' ' && str[i + 1] < 127)
			j = i + 1;
		i++;
	}
	while (str[j] && str[j] != ' ' && str[j] != '\t')
	{
		write(1, &str[j], 1);
		j++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}