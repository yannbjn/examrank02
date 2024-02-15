/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:58:56 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/15 20:05:22 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_wdmatch(char *s1, char *s2)
{
	int	i = 0;
	int j = 0;

	while (s2[i])
	{
		if (s1[j] == s2[i])
		{
			j++;
			if (s1[j] == '\0')
			{
				ft_putstr(s1);
				break ;
			}
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}