/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:38:18 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/23 18:04:18 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i = -1;
	
	while (str[++i])
		write(1, &str[i], 1);
}

char	*ft_lower(char *str)
{
	int	i = -1;

	while (str[++i])
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	return (str);
}

void	ft_rcapitalize(char *str)
{
	int	i = -1;
	str = ft_lower(str);

	while (str[++i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
			str[i] -= 32;
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
			ft_rcapitalize(argv[i]);
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}