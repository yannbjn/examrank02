/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:30:07 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/15 14:39:09 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;
	
	while (str[i])
		i++;
	return (i);
}

void	ft_search_and_replace(char *str, char *s1, char *s2)
{
	int i = 0;
	
	if (ft_strlen(s1) != 1 || ft_strlen(s2) != 1)
		return ;
	while (str[i])
	{
		if (str[i] == s1[0])
			str[i] = s2[0];
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		ft_search_and_replace(argv[1], argv[2], argv[3]);
	write (1, "\n", 1);
	return (0);
}
