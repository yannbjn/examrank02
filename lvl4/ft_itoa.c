/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:09:08 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/26 20:16:12 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(int	nbr)
{
	int	len;
	if (nbr <= 0)
		len = 1;
	else
		len = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int		len = 0;
	char	*str;
	unsigned int	nb;
	
	if (nbr < 0)
		nb = -nbr;
	else
		nb = nbr;
	len = ft_len(nbr);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		exit(1);
	str[len] = '\0';
	len--;
	while (len >= 0)
	{
		str[len] = nb % 10 + 48;
		nb /= 10;
		len--;
	}
	if (nbr < 0)
		str[0] = '-';
	return (str);
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_itoa(atoi(argv[1])));
}