/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoub-abn <ayoub-abn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:46:42 by ayoub-abn         #+#    #+#             */
/*   Updated: 2024/04/04 02:45:30 by ayoub-abn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a_to_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	int size, m, element, index;
	size = ft_lstsize(*stack_a);
	if (size == 2)
	{
		tmp = *stack_a;
		if (tmp->content > tmp->next->content)
			sa(stack_a);
	}
	else if (size == 3)
	{
		three_numbers(stack_a);
	}
	else
	{
		if (size == 4)
		{
			pb(stack_a, stack_b);
		}
		else
		{
			pb(stack_a, stack_b);
			pb(stack_a, stack_b);
			m = ft_lstsize(*stack_a);
			while (m > 3)
			{
				element = (*stack_a)->content;
				index = get_index_of_min_and_nearest(element, *stack_b);
				printf("index = %d\n", index);
				transfer_to_stack_b(index, stack_a, stack_b);
				// tba3_steck_b(*stack_b);
				// tba3_steck_a(*stack_a);
				m--;
			}
		}
		printf("sf 3\n");
		three_numbers(stack_a);
	}
}
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
	tba3_steck_a(*stack_a);
	//////////////////////////////sort_stack_a//////////////////////////////
	printf("\n\n---------------------push_a_to_b-----------------\n");
	push_a_to_b(stack_a, stack_b);
	printf("\n\n---------------------push_b_to_a-----------------\n");
	// // ///////////////////////////tbi3 stack_b//////////////////////////////
	push_b_to_a(stack_a, stack_b);
	tba3_steck_a(*stack_a);
}
