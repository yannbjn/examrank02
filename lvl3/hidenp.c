/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:49:24 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/23 16:11:32 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hidnp(char *s1, char *s2)
{
	size_t	i = 0;
	size_t	j = 0;

	while (s2[j] && s1[i])
	{
		if (s2[j] == s1[i])
			i++;
		j++;
	}
	if (s1[i] == '\0')
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_hidnp(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
