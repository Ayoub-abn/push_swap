/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <aabdenou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:59:39 by aabdenou          #+#    #+#             */
/*   Updated: 2024/05/10 14:52:32 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_of_best(t_list *stack_b, t_list *stack_a, int p)
{
	int	i;

	i = 0;
	while (stack_a)
	{
		if (stack_a->index < ft_lstsize(stack_b))
			break ;
		if (stack_a->index <= ft_lstsize(stack_b) + p)
			break ;
		i++;
		stack_a = stack_a->next;
	}
	return (i);
}

void	push_a_to_b(t_list **stack_a, t_list **stack_b, int p)
{
	while ((*stack_a))
	{
		if ((*stack_a)->index <= ft_lstsize(*stack_b))
		{
			pb(stack_a, stack_b);
			rb(stack_b);
		}
		else if ((*stack_a)->index < ft_lstsize(*stack_b) + p)
		{
			pb(stack_a, stack_b);
		}
		else if (index_of_best(*stack_b, *stack_a, p) <= ft_lstsize(*stack_a)
			/ 2)
		{
			ra(stack_a);
		}
		else
			rra(stack_a);
	}
}

int	max_num(t_list *stack_b)
{
	int	max;

	max = stack_b->content;
	while (stack_b)
	{
		if (stack_b->content > max)
			max = stack_b->content;
		stack_b = stack_b->next;
	}
	return (max);
}

int	index_of_max(t_list *stack_b, int max)
{
	int	i;

	i = 0;
	while (stack_b)
	{
		if (stack_b->content == max)
			break ;
		i++;
		stack_b = stack_b->next;
	}
	return (i);
}

void	push_b_to_a(t_list **stack_b, t_list **stack_a)
{
	while ((*stack_b))
	{
		if ((*stack_b)->content == max_num(*stack_b))
			pa(stack_b, stack_a);
		else if (index_of_max(*stack_b,
				max_num(*stack_b)) <= ft_lstsize(*stack_b) / 2)
			rb(stack_b);
		else
			rrb(stack_b);
	}
}
