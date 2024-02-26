/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:36:39 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/26 18:43:43 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rostring(char *str)
{
	int	i = 0;
	int start;
	int	end;
	int flag = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	start = i;
	while (str[i] && str[i] != ' ' && str[i] != '\t')
		i++;
	end = i;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		while ((str[i] == ' ' && str[i + 1] == ' ') || (str[i] == '\t' && str[i + 1] == '\t'))
			i++;
		if (str[i] != ' ' && str[i] != '\t')
			flag = 1;
		write(1, &str[i], 1);
		i++;
	}
	if (flag)
		write(1, " ", 1);
	while (start < end)
		write(1, &str[start++], 1);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}
