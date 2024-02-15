/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:41:51 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/15 19:46:52 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_snake_to_camel(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '_')
		{
			i++;
			str[i] -= 32;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_snake_to_camel(argv[1]);
	write(1, "\n", 1);
	return (0);
}

// int main(int argc, char **argv)
// {
// 	int i = 0;
	
// 	if (argc ==2 )
// 	{
// 		while(argv[1][i] != '\0')
// 		{
// 			if (argv[1][i] == '_')
// 			{
// 				i++;
// 				argv[1][i] = argv[1][i]-32;
// 			}
// 			write (1, &argv[1][i], 1);
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// }