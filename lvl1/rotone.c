/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:14:49 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/15 14:27:58 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rotone(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'z' || str[i] == 'Z')
			str[i] -= 25;
		else if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A'&& str[i] <= 'Y'))
			str[i] += 1;
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}
