/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:01:52 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/14 17:51:15 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_repeat_alpha(char *str)
{
	int	i;
	int j;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = -1;
			while (++j < str[i] +1 - 'a')
				write(1, &str[i], 1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = -1;
			while(++j < str[i] + 1 - 'A')
				write(1, &str[i], 1);
		}
		else
			write(1, &str[i], 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_repeat_alpha(argv[1]);
	//write (1, "\n", 1);
	return (0);
}