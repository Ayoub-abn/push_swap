/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:00:05 by aabdenou          #+#    #+#             */
/*   Updated: 2024/05/01 19:45:52 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_exit(t_list **stack_a, char **strs)
{
	free_stack_error(stack_a);
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
	i = 0;
	strs = ft_split(str, ' ');
	free(str);
	while (strs[i] != NULL)
	{
		num = ft_atoi(strs[i++]);
		check_db(stack_a, strs, (int)num);
		if (num == -2147483649)
			free_exit(stack_a, strs);
		ft_lstadd_back(stack_a, ft_lstnew((int)num));
	}
	free_strs(strs);
}
