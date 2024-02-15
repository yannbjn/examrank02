/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:41:35 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/15 17:47:51 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i = 0;
	int		j = 0;
	int		len = 0;
	char	c;
	
	while (str[len])
		len++;
	j = len - 1;
	while (j >= len / 2)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		j--;
		i++;
	}
	return (str);
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_strrev(argv[1]));
}