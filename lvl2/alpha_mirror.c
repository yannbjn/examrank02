/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:58:11 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/15 15:07:53 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_alpha_mirror(char *str)
{
	int	i = 0;
	
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = 'z' - (str[i] - 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 'Z' - (str[i] - 'A');
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return (0);
}