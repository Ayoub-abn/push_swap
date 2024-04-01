/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub-abn <ayoub-abn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:47:58 by ayoub-abn         #+#    #+#             */
/*   Updated: 2024/03/30 00:18:19 by ayoub-abn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(const char *str)
{
	int		i;
	int		sin;
	long	res;

	i = 0;
	sin = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sin = -1;
		if (str[i] == '+' || str[i] == '-')
			(ft_putstr_fd("Error", 2), exit(1));
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		res = res * 10 + (str[i++] - '0');
		if (res * sin > 2147483647 || res * sin < -2147483648)
			(ft_putstr_fd("Error", 2), exit(1));
	}
	if (str[i] || str[i - 1] == '-' || str[i - 1] == '+')
		(ft_putstr_fd("Error", 2), exit(1));
	return (res * sin);
}
