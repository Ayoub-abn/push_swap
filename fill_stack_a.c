/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub-abn <ayoub-abn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:16:15 by ayoub-abn         #+#    #+#             */
/*   Updated: 2024/04/03 18:30:10 by ayoub-abn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"

// void	fill_stack_a(t_list **stack_a, int ac, char **av)
// {
// 	int i;
// 	int num;
// 	char *str;
// 	char **strs;

// 	i = 1;
// 	stack_a = malloc(sizeof(t_list));
// 	while (i < ac)
// 	{
// 		str = ft_strjoin(str, av[i]);
// 		strs = ft_split(str, ' ');
// 		i++;
// 	}
// 	i = 0;
// 	while (strs[i])
// 	{
// 		num = ft_atoi(strs[i]);
// 		ft_lstadd_back(stack_a, ft_lstnew(num));
// 		i++;
// 	}
// }