/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:49:33 by aabdenou          #+#    #+#             */
/*   Updated: 2024/04/30 16:17:33 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_num(t_list *stack_a)
{
	int	min;

	min = stack_a->content;
	while (stack_a)
	{
		if (stack_a->content < min)
			min = stack_a->content;
		stack_a = stack_a->next;
	}
	return (min);
}

int	indix_of_min(t_list *stack_a)
{
	int	i;

	i = 0;
	while (stack_a)
	{
		if (stack_a->content == min_num(stack_a))
			break ;
		i++;
		stack_a = stack_a->next;
	}
	return (i);
}

void	three_numbers(t_list **stack_a)
{
	int		max;
	t_list	*tmp;

	tmp = *stack_a;
	max = max_num(tmp);
	if (max == tmp->next->content)
		rra(stack_a);
	else if (tmp->content == max)
		ra(stack_a);
	tmp = *stack_a;
	if (tmp->content > tmp->next->content)
		sa(stack_a);
}

void	for_numbers(t_list **stack_a, t_list **stack_b)
{
	while (ft_lstsize(*stack_a) > 3)
	{
		if (indix_of_min(*stack_a) == 0)
			pb(stack_a, stack_b);
		else if (indix_of_min(*stack_a) < ft_lstsize(*stack_a) / 2)
			ra(stack_a);
		else
			rra(stack_a);
	}
	three_numbers(stack_a);
	while (ft_lstsize(*stack_b))
	{
		pa(stack_b, stack_a);
	}
	free_stack(stack_a);
	free_stack(stack_b);
}

void	sort(t_list **stack_a, t_list **stack_b, int p)
{
	int	*array;

	array = sort_array(fill_array(*stack_a), *stack_a);
	index_in_list(*stack_a, array);
	push_a_to_b(stack_a, stack_b, p);
	push_b_to_a(stack_b, stack_a);
	free(array);
	free_stack(stack_a);
	free_stack(stack_b);
}
