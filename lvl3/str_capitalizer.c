/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:00:12 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/23 18:14:13 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i = -1;

	while (str[++i])
		write(1, &str[i], 1);
}

void	ft_capitalize(char *str)
{
	int	i = -1;
	int	flag = 1;

	while (str[++i])
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (flag)
			{
				str[i] -= 32;
				flag = 0;
			}
		}
		else if (str[i] == ' ' || str[i] == '\t')
			flag = 1;
		else
			flag = 0;
	}
	ft_putstr(str);
}

int	main(int argc, char **argv)
{
	int	i = 0;

	if (argc > 1)
	{
		while (++i < argc)
		{
			ft_capitalize(argv[i]);
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
