/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub-abn <ayoub-abn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:46:42 by ayoub-abn         #+#    #+#             */
/*   Updated: 2024/04/05 02:11:01 by ayoub-abn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	int		i;
	char	*str;
	char	**strs;
	t_list	**stack_a;
	int		num;
	t_list	**stack_b;

	////////////////////////t3mar dyal stack_a///////////////////////////////
	i = 1;
	stack_a = malloc(sizeof(t_list));
	stack_b = malloc(sizeof(t_list));
	while (i < ac)
	{
		str = ft_strjoin(str, av[i]);
		strs = ft_split(str, ' ');
		i++;
	}
	i = 0;
	while (strs[i])
	{
		num = ft_atoi(strs[i]);
		ft_lstadd_back(stack_a, ft_lstnew(num));
		i++;
	}
	////////////////////////////tbi3 stack_a////////////////////////////////
	//tba3_steck_a(*stack_a);
// 	//////////////////////////////sort_stack_a//////////////////////////////
	//printf("\n\n---------------------push_a_to_b-----------------\n");
 	push_a_to_b(stack_a, stack_b);
 	//printf("\n\n---------------------push_b_to_a-----------------\n");
 	push_b_to_a(stack_a, stack_b);
	//tba3_steck_a(*stack_a);
// 	printf("\n\n--------------------------------------\n");
 	tba3_steck_a(*stack_a);
 	// tba3_steck_b(*stack_b);
}
