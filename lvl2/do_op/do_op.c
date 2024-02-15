/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:15:06 by yabejani          #+#    #+#             */
/*   Updated: 2024/02/15 16:46:19 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_do_op(char *nb1, char *op, char *nb2)
{
	if (op[0] == '+')
		printf("%d", atoi(nb1) + atoi(nb2));
	if (op[0] == '-')
		printf("%d", atoi(nb1) - atoi(nb2));
	if (op[0] == '*')
		printf("%d", atoi(nb1) * atoi(nb2));
	if (op[0] == '/')
		printf("%d", atoi(nb1) / atoi(nb2));
	if (op[0] == '%')
		printf("%d", atoi(nb1) % atoi(nb2));
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		write(1, "\n", 1);
	ft_do_op(argv[1], argv[2], argv[3]);
	return (0);
}