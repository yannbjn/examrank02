/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:29:54 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/15 17:39:53 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s2[j] == s1[i])
				return (s1 + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

int	main(int argc, char **argv)
{
	printf("%s\n", ft_strpbrk(argv[1], argv[2]));
	printf("%s\n", strpbrk(argv[1], argv[2]));
}