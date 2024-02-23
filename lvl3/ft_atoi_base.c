/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:28:38 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/23 14:58:05 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	ft_tolow(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int	ft_get_digit(char c, int digits_in_base)
{
	int	max_digit;
	
	if (digits_in_base <= 10)
		max_digit = digits_in_base + 48;
	else
		max_digit = digits_in_base - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i = 0;
	int	res = 0;
	int sign = 1;
	int digit;
	
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while ((digit = ft_get_digit(ft_tolow(str[i]), str_base)) >= 0)
	{
		res = res * str_base + digit;
		i++;
	}
	return (res * sign);
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_atoi_base(argv[1], atoi(argv[2])));
	return (0);	
}