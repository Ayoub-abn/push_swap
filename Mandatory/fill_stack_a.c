/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:00:05 by aabdenou          #+#    #+#             */
/*   Updated: 2024/05/04 23:25:21 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_exit(t_list **stack_a, char **strs)
{
	free_stack(stack_a);
	free_strs(strs);
	exit(255);
}

void	fill_stack_a(t_list **stack_a, char **av, int ac)
{
	int		i;
	char	*str;
	char	**strs;
	long	num;

	str = NULL;
	i = 1;
	while (i < ac)
	{
		check_sp(av[i], stack_a, str);
		str = ft_strjoin(str, av[i++]);
	}
	strs = ft_split(str, ' ');
	i = 0;
	free(str);
	while (strs[i] != NULL)
	{
		num = ft_atoi(strs[i++]);
		if (num == -2147483649)
			free_exit(stack_a, strs);
		check_db(stack_a, strs, (int)num);
		ft_lstadd_back(stack_a, ft_lstnew((int)num));
	}
	free_strs(strs);
}
