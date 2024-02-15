/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:48:48 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/15 18:38:34 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

// size_t	ft_strspn(const char *s, const char *accept)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	while (s[i] && s[i] == accept[i])
// 		i++;
// 	return (i);
// }

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	c;
	
	i = 0;
	c = 0;
	while (s[i])
	{
		if (s[i] == accept[i])
			c++;
		else
			break;
		i++;
	}
	return (c);
}

int	main(int argc, char **argv)
{
	printf("%u\n", strspn(argv[1], argv[2]));
	printf("%u\n", strspn(argv[1], argv[2]));
}
